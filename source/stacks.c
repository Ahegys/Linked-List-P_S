/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:41 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 07:03:49 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void  init_stacks(t_stk * stk_a, t_stk * stk_b)
{
	stk_a->size = 0;
	stk_a->top = NULL;
	stk_a->bottom = NULL;
	stk_b->size = 0;
	stk_b->bottom = NULL;
	stk_b->top = NULL;
}

void	fill_stack(t_stk * stk_a, int data)
{
	t_node * temp;
	t_node * node;

	temp = stk_a->top;
	node = new_node(data);
	while (temp)
	{
		if (temp->value == node->value)
		{
			free(node);
			error();
		}
		temp = temp->next;
	}
	if (stk_a->size == 0)
		stk_a->top = node;
	else
	{
		node->prev = last_node(stk_a);
		last_node(stk_a)->next = node;
	}
	stk_a->bottom = node;
	stk_a->size++;
	temp = NULL;
	free(node);
}

t_node	*new_node(int data)
{
	t_node *new_node;

	new_node = (t_node*)malloc(sizeof(t_node));
	if (!new_node)
		error();
	new_node->value = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->i = 0;
	return (new_node);
}

t_node	*last_node(t_stk * stk)
{
	t_node	*node;

	node = stk->top;
	while (node->next != NULL)
		node = node->next;
	return (node);
}