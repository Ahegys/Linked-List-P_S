/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:34:40 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 12:34:53 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

t_node	*pop(t_stk *stk)
{
	t_node	*remove;

	if (stk->size == 0)
		return (NULL);
	remove = stk->top;
	if (stk->size >= 2)
		stk->top = stk->top->next;
	else
		stk->top = NULL;
	stk->size--;
	return (remove);
}

void	push(t_stk *stk, t_node *node)
{
	node->prev = NULL;
	node->next = stk->top;
	stk->top = node;
	stk->size++;
}
