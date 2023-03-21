/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:27 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 06:10:36 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	transform_index(t_stk * stk)
{
	t_node * bucket;
	t_node * temp;

	temp = stk->top;
	while (temp)
	{
		bucket = stk->top;
		while (bucket)
		{
			if (temp->value > bucket->value)
				temp->i++;
			bucket = bucket->next;
		}
		temp = temp->next;
	}
}

void	parse(int ac, char * av[],	t_stk * stk)
{
	int		i;
	int		each_arg;
	char	**splited;
	char	**temp;

	i = 0;
	while (i++ < ac)
	{
		splited = ft_split(av[i], ' ');
		temp = splited;
		while (*splited)
		{
			each_arg = ft_atoi(*splited);
			fill_stack(stk, each_arg);
			free(*splited);
			splited++;
		}
		free(temp);
	}
}
