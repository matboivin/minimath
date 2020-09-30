/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:59:06 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function copies 2D vector src to 2D vector dst
*/

void		cpy_vec2(t_vec2 *dst, t_vec2 src)
{
	dst->x = src.x;
	dst->y = src.y;
}

/*
** This function returns true if 2D vector to_check is null
*/

bool		is_null_vec2(t_vec2 to_check)
{
	return (norm_vec2(to_check) == DEFAULT_VALUE);
}
