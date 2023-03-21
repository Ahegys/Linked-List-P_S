/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:02:44 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 12:32:37 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	free_m(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	error(t_stk *stk)
{
	ft_printf("Error\n");
	free_node(stk);
	exit(-1);
}

void	free_node(t_stk *stk)
{
	t_node	*temp;

	while (stk->top)
	{
		temp = stk->top;
		stk->top = stk->top->next;
		free(temp);
	}
}

int	main(int ac, char **av)
{
	t_stk	stk_a;
	t_stk	stk_b;

	arg_validator(ac, av);
	init_stacks(&stk_a, &stk_b);
	parse(ac, av, &stk_a);
	transform_index(&stk_a);
	sel_stack(&stk_a, &stk_b);
	free_node(&stk_a);
	free_node(&stk_b);
	return (0);
}
