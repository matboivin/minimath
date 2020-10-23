/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:56:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "minimath_define.h"
#include "minimath_vec4.h"

/*
** This function computes the dot product of a 4D vector with itself
*/

double		quadnorm_vec4(t_vec4 v)
{
	return (dot_vec4(v, v));
}

/*
** This function computes the norm (length) of a 3D vector
*/

double		norm_vec4(t_vec4 v)
{
	return (sqrt(quadnorm_vec4(v)));
}

/*
** This function computes a normalized 3D vector (vector of length 1)
*/

t_vec4		normalize_vec4(t_vec4 v)
{
	double	norm;

	norm = norm_vec4(v);
	if (norm > 0.0)
		return (scale_vec4((UNIT_VALUE / norm), v));
	return (v);
}
