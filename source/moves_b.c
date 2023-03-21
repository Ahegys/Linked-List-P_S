/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:02:49 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 12:35:27 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	sb(t_stk *stk, int print)
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
		ft_printf("sb\n");
}

void	pb(t_stk *stk_b, t_stk *stk_a, int print)
{
	t_node	*temp;

	if (stk_a->size == 0)
		return ;
	temp = pop(stk_a);
	push(stk_b, temp);
	if (print)
		ft_printf("pb\n");
}

void	rb(t_stk *stk, int print)
{
	t_node	*temp;

	if (stk->size <= 1)
		return ;
	temp = stk->top;
	temp->prev = last_node(stk);
	temp->next = NULL;
	last_node(stk)->next = temp;
	stk->bottom = temp;
	stk->top = stk->top->next;
	stk->top->prev = NULL;
	stk->bottom->next = NULL;
	if (print)
		ft_printf("rb\n");
}

void	rrb(t_stk *stk, int print)
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
		ft_printf("rrb\n");
}
