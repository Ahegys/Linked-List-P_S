/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:57 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 11:04:39 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

# include "./structs.h"

t_node	*new_node(int data);
t_node	*last_node(t_stk *stk);
void	fill_stack(t_stk *stk_a, int data);
void	init_stacks(t_stk *stk_a, t_stk *stk_b);

#endif