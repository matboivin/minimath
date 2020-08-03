/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 21:56:19 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		len_vec4(t_vec4 vec)
{
	double	result;
	t_vec4	tmp;

	tmp = mult_vec4(vec, vec);
	result = sqrt(tmp.x + tmp.y + tmp.z + tmp.w);
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
