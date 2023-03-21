/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:49 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 11:04:35 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <stddef.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	size_t			i;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_stk
{
	size_t			size;
	t_node			*top;
	t_node			*bottom;
}					t_stk;
#endif
