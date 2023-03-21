/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:04:16 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 11:05:07 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_A_H
# define MOVES_A_H

# include "./structs.h"

void	sa(t_stk *stk, int print);
void	ra(t_stk *stk, int print);
void	rra(t_stk *stk, int print);
void	pa(t_stk *stk_a, t_stk *stk_b, int print);

#endif