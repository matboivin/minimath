/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/31 21:35:56 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

t_vec4		add_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	result.w = a.w + b.w;
	return (result);
}

t_vec4		sub_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	result;

	result = add_vec4(a, scale_vec4(-1, b));
	return (result);
}

t_vec4		mult_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	result;

	result.x = a.x * b.x;
	result.y = a.y * b.y;
	result.z = a.z * b.z;
	result.w = a.w * b.w;
	return (result);
}

t_vec4		div_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	result;

	result.x = a.x / b.x;
	result.y = a.y / b.y;
	result.z = a.z / b.z;
	result.w = a.w / b.w;
	return (result);
}

t_vec4		scale_vec4(double scalar, t_vec4 vec)
{
	t_vec4	result;

	result.x = scalar * vec.x;
	result.y = scalar * vec.y;
	result.z = scalar * vec.z;
	result.w = scalar * vec.w;
	return (result);
}
