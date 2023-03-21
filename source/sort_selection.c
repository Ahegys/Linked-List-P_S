/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_selection.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:02:48 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 12:36:20 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	two_num(t_stk *stk)
{
	if (stk->size != 2)
		error(stk);
	if (stk->top->i > stk->bottom->i)
		sa(stk, 1);
}

static void	three_num(t_stk *stk)
{
	int	num;

	if (stk->size != 3)
		error(stk);
	num = indentfy(stk);
	if (num == 1)
		sa(stk, 1);
	else if (num == 2)
	{
		sa(stk, 1);
		rra(stk, 1);
	}
	else if (num == 3)
		ra(stk, 1);
	else if (num == 4)
	{
		sa(stk, 1);
		ra(stk, 1);
	}
	else if (num == 5)
		rra(stk, 1);
}

static void	four_num(t_stk *stk_a, t_stk *stk_b)
{
	if (stk_a->size != 4)
		error(stk_a);
	pb_lowest(stk_a, stk_b);
	three_num(stk_a);
	pa(stk_a, stk_b, 1);
}

static void	five_num(t_stk *stk_a, t_stk *stk_b)
{
	if (stk_a->size != 5)
		error(stk_a);
	pb_lowest(stk_a, stk_b);
	pb_second_lowest(stk_a, stk_b);
	three_num(stk_a);
	pa(stk_b, stk_a, 1);
	pa(stk_a, stk_b, 1);
}

void	under_five(t_stk *stk_a, t_stk *stk_b)
{
	if (stk_a->size == 2)
		return (two_num(stk_a));
	if (stk_a->size == 3)
		return (three_num(stk_a));
	if (stk_a->size == 4)
		return (four_num(stk_a, stk_b));
	if (stk_a->size == 5)
		return (five_num(stk_a, stk_b));
}
