/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_op2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 16:50:31 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		len_vec3(t_vec3 vec)
{
	t_vec3	v;
	double	result;

	v = mult_vec3(vec, vec);
	result = sqrt(v.x + v.y + v.z);
	return (result);
}

t_vec3		normalize_vec3(t_vec3 vec)
{
	t_vec3	result;
	double	len;

	len = len_vec3(vec);
	result.x = vec.x / len;
	result.y = vec.y / len;
	result.z = vec.z / len;
	return (result);
}
