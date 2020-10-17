/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/17 18:16:24 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function reverses the sign of the members of a 4D vector
*/

t_vec4		rev_sign_vec4(t_vec4 v)
{
	return (scale_vec4(REVUNIT_VALUE, v));
}

/*
** This function copies 4D vector src to 4D vector dst
*/

void		cpy_vec4(t_vec4 *dst, t_vec4 src)
{
	dst->x = src.x;
	dst->y = src.y;
	dst->z = src.z;
	dst->w = src.w;
}

/*
** This function returns true if 4D vector to_check is null
*/

bool		is_null_vec4(t_vec4 to_check)
{
	return (norm_vec4(to_check) == DEFAULT_VALUE);
}
