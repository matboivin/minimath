/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/17 18:52:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function adds two 4D vectors
*/

t_vec4		add_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	result.w = a.w + b.w;
	return (result);
}

/*
** This function subtracts two 4D vectors
*/

t_vec4		sub_vec4(t_vec4 a, t_vec4 b)
{
	return (add_vec4(a, rev_dir_vec4(b)));
}

/*
** This function multiplies two 4D vectors
*/

t_vec4		mult_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	result;

	result.x = a.x * b.x;
	result.y = a.y * b.y;
	result.z = a.z * b.z;
	result.w = a.w * b.w;
	return (result);
}

/*
** This function divides two 4D vectors
*/

t_vec4		div_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	result;

	result.x = a.x / b.x;
	result.y = a.y / b.y;
	result.z = a.z / b.z;
	result.w = a.w / b.w;
	return (result);
}

/*
** This function scales a 4D vector
*/

t_vec4		scale_vec4(double scalar, t_vec4 v)
{
	t_vec4	result;

	result.x = scalar * v.x;
	result.y = scalar * v.y;
	result.z = scalar * v.z;
	result.w = scalar * v.w;
	return (result);
}
