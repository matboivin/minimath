/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/04 01:56:13 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		quadnorm_vec3(t_vec3 v)
{
	return (dot_vec3(v, v));
}

double		len_vec3(t_vec3 v)
{
	return (sqrt(quadnorm_vec3(v)));
}

t_vec3		normalize_vec3(t_vec3 v)
{
	t_vec3	result;
	double	len;

	len = len_vec3(v);
	if (len > 0)
	{
		len = 1 / len;
		result = scale_vec3(len, result);
		return (result);
	}
	return (v);
}
