/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:58:38 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function adds two 2D vectors
*/

t_vec2		add_vec2(t_vec2 a, t_vec2 b)
{
	t_vec2	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return (result);
}

/*
** This function subtracts two 2D vectors
*/

t_vec2		sub_vec2(t_vec2 a, t_vec2 b)
{
	return (add_vec2(a, scale_vec2(REVUNIT_VALUE, b)));
}

/*
** This function multiplies two 2D vectors
*/

t_vec2		mult_vec2(t_vec2 a, t_vec2 b)
{
	t_vec2	result;

	result.x = a.x * b.x;
	result.y = a.y * b.y;
	return (result);
}

/*
** This function divides two 2D vectors
*/

t_vec2		div_vec2(t_vec2 a, t_vec2 b)
{
	t_vec2	result;

	result.x = a.x / b.x;
	result.y = a.y / b.y;
	return (result);
}

/*
** This function scales a 2D vector
*/

t_vec2		scale_vec2(double scalar, t_vec2 v)
{
	t_vec2	result;

	result.x = scalar * v.x;
	result.y = scalar * v.y;
	return (result);
}
