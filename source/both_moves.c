/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:09 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 06:03:10 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"


void	ss(t_stk * stk_a, t_stk * stk_b)
{
	sa(stk_a,0);
	sb(stk_b,0);
	ft_printf("ss");
}

void	rr(t_stk * stk_a, t_stk * stk_b)
{
	ra(stk_a,0);
	rb(stk_b,0);
	ft_printf("rr");
}

void	rrr(t_stk * stk_a, t_stk * stk_b)
{
	rra(stk_a,0);
	rrb(stk_b,0);
	ft_printf("rrr");
}