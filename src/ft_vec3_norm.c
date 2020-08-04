/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_norm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/04 02:27:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** Dot Product of a vector with itself
*/

double		quadnorm_vec3(t_vec3 v)
{
	return (dot_vec3(v, v));
}

/*
** Norm: Length of a vector
*/

double		norm_vec3(t_vec3 v)
{
	return (sqrt(quadnorm_vec3(v)));
}

/*
** Normalized vector: A vector of length 1
*/

t_vec3		normalize_vec3(t_vec3 v)
{
	double	norm;

	norm = norm_vec3(v);
	if (norm > 0)
	{
		norm = 1 / norm;
		return (scale_vec3(norm, v));
	}
	return (v);
}