/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 21:56:55 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		len_vec3(t_vec3 vec)
{
	double	result;
	t_vec3	tmp;

	tmp = mult_vec3(vec, vec);
	result = sqrt(tmp.x + tmp.y + tmp.z);
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
