/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:54:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "minimath_define.h"
#include "minimath_vec2.h"

/*
** This function computes the dot product of a 2D vector with itself
*/

double		quadnorm_vec2(t_vec2 v)
{
	return (dot_vec2(v, v));
}

/*
** This function computes the norm (length) of a 2D vector
*/

double		norm_vec2(t_vec2 v)
{
	return (sqrt(quadnorm_vec2(v)));
}

/*
** This function computes a normalized 2D vector (vector of length 1)
*/

t_vec2		normalize_vec2(t_vec2 v)
{
	double	norm;

	norm = norm_vec2(v);
	if (norm > 0.0)
		return (scale_vec2((UNIT_VALUE / norm), v));
	return (v);
}
