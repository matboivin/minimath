/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/04 13:52:08 by mboivin          ###   ########.fr       */
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
	return (add_vec4(a, scale_vec4(-1, b)));
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

t_vec4		scale_vec4(double scalar, t_vec4 v)
{
	t_vec4	result;

	result.x = scalar * v.x;
	result.y = scalar * v.y;
	result.z = scalar * v.z;
	result.w = scalar * v.w;
	return (result);
}
