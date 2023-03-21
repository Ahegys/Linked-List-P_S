/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_b.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:04:14 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 11:05:04 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_B_H
# define MOVES_B_H

# include "./structs.h"

void	sb(t_stk *stk, int print);
void	rb(t_stk *stk, int print);
void	rrb(t_stk *stk, int print);
void	pb(t_stk *stk_a, t_stk *stk_b, int print);

#endif