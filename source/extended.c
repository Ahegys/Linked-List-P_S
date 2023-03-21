/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extended.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:14 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 06:03:15 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

long long ft_atol(const char * str);

static	int	is_space(const char str)
{
	if (str == ' ' || str == '\n' || str == '\t')
		return (1);
	if (str == '\v' || str == '\f' || str == '\r')
		return (1);
	return (0);
}

long long ft_atoll(const char * str)
{
	size_t	i;
	size_t	result;
	int			flag;

	i = 0;
	result = 0;
	flag = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result >= 9223372036854775808U && flag == -1)
		return (0);
	else if (result >= 9223372036854775807 && flag == 1)
		return (-1);
	return (result * flag);
}
