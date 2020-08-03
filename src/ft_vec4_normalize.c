/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/04 01:56:19 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		quadnorm_vec4(t_vec4 v)
{
	return (dot_vec4(v, v));
}

double		len_vec4(t_vec4 v)
{
	return (sqrt(quadnorm_vec4(v)));
}

t_vec4		normalize_vec4(t_vec4 v)
{
	t_vec4	result;
	double	len;

	len = len_vec4(v);
	if (len > 0)
	{
		len = 1 / len;
		result = scale_vec4(len, result);
		return (result);
	}
	return (v);
}
