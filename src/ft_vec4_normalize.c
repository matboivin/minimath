/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 22:40:37 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		len_vec4(t_vec4 v)
{
	return (sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w)));
}

t_vec4		normalize_vec4(t_vec4 v)
{
	t_vec4	result;
	double	len;

	result = create_vec4(0.0, 0.0, 0.0, 0.0);
	len = len_vec4(v);
	if (len > 0)
	{
		len = 1 / len;
		result = scale_vec4(len, result);
	}
	return (result);
}
