/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelipe- <afelipe-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:04:04 by afelipe-          #+#    #+#             */
/*   Updated: 2023/03/21 11:04:54 by afelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADIX_UTILS_H
# define RADIX_UTILS_H

# include "./structs.h"

void	transform_index(t_stk *stk);
void	parse(int ac, char *av[], t_stk *stk);
#endif
