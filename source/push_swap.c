/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:02:44 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 06:51:50 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	error()
{
	ft_printf("Error\n");
	exit(-1);
}

int main(int ac, char ** av)
{
	t_stk stk_a;
	t_stk stk_b;

	arg_validator(ac, av);
	init_stacks(&stk_a, &stk_b);
	parse(ac, av, &stk_a);
	transform_index(&stk_a);
	sel_stack(&stk_a, &stk_b);
	return (0);
}
