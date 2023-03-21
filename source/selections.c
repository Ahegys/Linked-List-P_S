/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selections.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:30 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 06:03:31 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	indentfy(t_stk * stk)
{
	t_node * arg_1;
	t_node * arg_2;
	t_node * arg_3;

	arg_1 = stk->top;
	arg_2 = stk->top->next;
	arg_3 = stk->bottom;

	if (arg_2->i < arg_1->i && arg_1->i < arg_3->i)
		return (1);
	if (arg_3->i < arg_2->i && arg_2->i < arg_1->i)
		return (2);
	if (arg_2->i < arg_3->i && arg_3->i < arg_1->i)
		return (3);
	if (arg_1->i < arg_3->i && arg_3->i < arg_2->i)
		return (4);
	if (arg_3->i < arg_1->i && arg_1->i < arg_2->i)
		return (5);
	return (0);
}

void	pb_lowest(t_stk * stk_a, t_stk * stk_b)
{
	if (stk_a->bottom->i == 0)
	{
		rra(stk_a, 1);
		pb(stk_b, stk_a, 1);
	}
	else
	{
		while (stk_a->top)
		{
			if (stk_a->top->i == 0)
			{
				pb(stk_b, stk_a, 1);
				break;
			}
			ra(stk_a, 1);
		}
	}
}

void	pb_second_lowest(t_stk * stk_a, t_stk * stk_b)
{
	while (stk_a->top)
	{
		if (stk_a->top->i == 1)
		{
			pb(stk_b, stk_a, 1);
			break;
		}
		ra(stk_a, 1);
	}
}

static int	ft_select(t_stk * stk)
{
	size_t	i;
	t_node * temp;

	i = 0;
	temp = stk->top;
	while (temp)
	{
		if (i != temp->i)
			return (0);
		temp = temp->next;
		i++;
	}
	return (1);
}

void	sel_stack(t_stk * stk_a, t_stk * stk_b)
{
	if (ft_select(stk_a))
		return;
	if (stk_a->size <= 5)
		return (under_five(stk_a, stk_b));
	big_mom(stk_a, stk_b);
}