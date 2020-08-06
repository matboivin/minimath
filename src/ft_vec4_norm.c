/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_norm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/06 16:58:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

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
	if (norm > 0)
		return (scale_vec4((1 / norm), v));
	return (v);
}
