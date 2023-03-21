/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:02:53 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 06:02:54 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int digit_checker(char *str)
{
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (-1);
}

static int int_checker(char *str)
{
	long long	temp;

	temp = ft_atoll(str);
	if (temp >= -2147483648 && temp <= 2147483647)
		return (-1);
	return (0);
}

static void space_checker(char *str)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = str;
	while (*temp)
	{
		if (*temp == ' ' || *temp == '\n' || *temp == '\r'
			|| *temp == '\t' || *temp == '\v' || *temp == '\f')
			i++;
		temp++;
	}
	if (i == ft_strlen(str))
		error();
}

static int arg_checker(char *str)
{
	if (!digit_checker(str) || !int_checker(str))
		return (0);
	return (-1);
}

void arg_validator(int ac, char *av[])
{
	int		i;
	char	**splited;
	char	*each_arg;
	char	**temp;

	if (ac < 1)
		error();
	i = 1;
	while (i < ac)
	{
		space_checker(av[i]);
		splited = ft_split(av[i], ' ');
		temp = splited;
		while (*splited)
		{
			each_arg = *splited;
			if (!arg_checker(each_arg))
				error();
			free(*splited);
			splited++;
		}
		free(temp);
		i++;
	}
}