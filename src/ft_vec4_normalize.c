/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 21:48:03 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		len_vec4(t_vec4 vec)
{
	t_vec4	v;
	double	result;

	v = mult_vec4(vec, vec);
	result = sqrt(v.x + v.y + v.z + v.w);
	return (result);
}

t_vec4		normalize_vec4(t_vec4 vec)
{
	t_vec4	result;
	double	len;

	len = len_vec4(vec);
	result.x = vec.x / len;
	result.y = vec.y / len;
	result.z = vec.z / len;
	result.w = vec.w / len;
	return (result);
}
