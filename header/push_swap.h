/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:04:09 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 12:06:15 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "./big_mom.h"
# include "./both_moves.h"
# include "./extended.h"
# include "./moves_a.h"
# include "./moves_b.h"
# include "./radix_utils.h"
# include "./selections.h"
# include "./stack_actions.h"
# include "./stacks.h"
# include "./structs.h"
# include "./validate.h"

void	error(t_stk *stk);
void	free_m(char **matrix);
void	free_node(t_stk *stk);
#endif
