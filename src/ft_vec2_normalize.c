/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/04 01:57:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		quadnorm_vec2(t_vec2 v)
{
	return (dot_vec2(v, v));
}

double		len_vec2(t_vec2 v)
{
	return (sqrt(quadnorm_vec2(v)));
}

t_vec2		normalize_vec2(t_vec2 v)
{
	t_vec2	result;
	double	len;

	len = len_vec2(v);
	if (len > 0)
	{
		len = 1 / len;
		result = scale_vec2(len, result);
		return (result);
	}
	return (v);
}
