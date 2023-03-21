/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_mom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:02:51 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 12:30:32 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	get_bit(t_stk *stk)
{
	t_node	*temp;
	size_t	max;
	int		max_bits;

	temp = stk->top;
	max = temp->i;
	max_bits = 0;
	while (temp)
	{
		if (temp->i > max)
			max = temp->i;
		temp = temp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	big_mom(t_stk *stk_a, t_stk *stk_b)
{
	t_node	*temp;
	int		i;
	int		j;
	int		max_bits;
	int		size;

	i = 0;
	temp = stk_a->top;
	max_bits = get_bit(stk_a);
	size = stk_a->size;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp = stk_a->top;
			if (((temp->i >> i) & 1) == 1)
				ra(stk_a, 1);
			else
				pb(stk_b, stk_a, 1);
		}
		while (stk_b->size > 0)
			pa(stk_a, stk_b, 1);
		i++;
	}
}
