/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:17 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 12:35:52 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	sa(t_stk *stk, int print)
{
	t_node	*curr;
	t_node	*next;
	t_node	*third;

	if (stk->top == NULL || stk->top->next == NULL)
		return ;
	curr = stk->top;
	next = stk->top->next;
	third = stk->top->next->next;
	curr->prev = next;
	curr->next = third;
	next->prev = NULL;
	next->next = curr;
	stk->top = next;
	if (third)
		third->prev = curr;
	if (print)
		ft_printf("sa\n");
}

void	pa(t_stk *stk_a, t_stk *stk_b, int print)
{
	t_node	*temp;

	if (stk_b->size == 0)
		return ;
	temp = pop(stk_b);
	push(stk_a, temp);
	if (print)
		ft_printf("pa\n");
}

void	ra(t_stk *stk, int print)
{
	t_node	*temp;
	t_node	*next;

	if (stk->size <= 1)
		return ;
	temp = stk->top;
	next = stk->top->next;
	stk->bottom->next = temp;
	temp->prev = stk->bottom;
	temp->next = NULL;
	stk->bottom = temp;
	stk->top = next;
	if (print)
		ft_printf("ra\n");
}

void	rra(t_stk *stk, int print)
{
	t_node	*temp;
	t_node	*prev;

	if (stk->size <= 1)
		return ;
	temp = stk->bottom;
	prev = stk->bottom->prev;
	temp->next = stk->top;
	temp->prev = NULL;
	stk->top = temp;
	stk->bottom = prev;
	stk->bottom->next = NULL;
	if (print)
		ft_printf("rra\n");
}
