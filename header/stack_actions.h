/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_actions.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:03:59 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 11:04:42 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_ACTIONS_H
# define STACK_ACTIONS_H

# include "./structs.h"

t_node	*pop(t_stk *stk);
void	push(t_stk *stk, t_node *node);
#endif