/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/04 02:05:42 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** Dot Product of a vector with itself
*/

double		quadnorm_vec2(t_vec2 v)
{
	return (dot_vec2(v, v));
}

/*
** Norm: Length of a vector
*/

double		norm_vec2(t_vec2 v)
{
	return (sqrt(quadnorm_vec2(v)));
}

/*
** Normalized vector: A vector of length 1
*/

t_vec2		normalize_vec2(t_vec2 v)
{
	t_vec2	result;
	double	norm;

	norm = norm_vec2(v);
	if (norm > 0)
	{
		norm = 1 / norm;
		result = scale_vec2(norm, result);
		return (result);
	}
	return (v);
}
