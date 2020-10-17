/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/17 18:11:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function reverses the sign of the members of a 3D vector
*/

t_vec3		rev_sign_vec3(t_vec3 v)
{
	return (scale_vec3(REVUNIT_VALUE, v));
}

/*
** This function copies 3D vector src to 3D vector dst
*/

void		cpy_vec3(t_vec3 *dst, t_vec3 src)
{
	dst->x = src.x;
	dst->y = src.y;
	dst->z = src.z;
}

/*
** This function returns true if 3D vector to_check is null
*/

bool		is_null_vec3(t_vec3 to_check)
{
	return (norm_vec3(to_check) == DEFAULT_VALUE);
}

/*
** This function computes the cosine of the angle between two 3D vectors
*/

double		cos_vec3(t_vec3 a, t_vec3 b)
{
	return (dot_vec3(a, b) / (norm_vec3(a) * norm_vec3(b)));
}
