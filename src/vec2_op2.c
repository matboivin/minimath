/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/17 18:54:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function reverses the direction of a 2D vector
*/

t_vec2		rev_dir_vec2(t_vec2 v)
{
	return (scale_vec2(REVUNIT_VALUE, v));
}

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
