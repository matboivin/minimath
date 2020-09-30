/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 16:02:33 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function computes the dot product of a 3D vector with itself
*/

double		quadnorm_vec3(t_vec3 v)
{
	return (dot_vec3(v, v));
}

/*
** This function computes the norm (length) of a 3D vector
*/

double		norm_vec3(t_vec3 v)
{
	return (sqrt(quadnorm_vec3(v)));
}

/*
** This function computes a normalized 3D vector (vector of length 1)
*/

t_vec3		normalize_vec3(t_vec3 v)
{
	double	norm;

	norm = norm_vec3(v);
	if (norm > 0.0)
		return (scale_vec3((UNIT_VALUE / norm), v));
	return (v);
}
