/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selections.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- < afelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:04:02 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 06:04:03 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELECTIONS_H
# define SELECTIONS_H

#include "./structs.h"

int	indentfy(t_stk * stk);
void	sel_stack(t_stk * stk_a, t_stk * stk_b);
void	pb_lowest(t_stk * stk_a, t_stk * stk_b);
void	under_five(t_stk * stk_a, t_stk * stk_b);
void	pb_second_lowest(t_stk * stk_a, t_stk * stk_b);
#endif