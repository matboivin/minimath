/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_op2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/27 22:02:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilib_math.h"

t_vec2		add_vec3(t_vec2 a, t_vec2 b)
{
	t_vec2	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return (result);
}

t_vec2		sub_vec3(t_vec2 a, t_vec2 b)
{
	t_vec2	result;

	result.x = a.x - b.x;
	result.y = a.y - b.y;
	return (result);
}

t_vec2		mult_vec2(t_vec2 a, t_vec2 b)
{
	t_vec2	result;

	result.x = a.x * b.x;
	result.y = a.y * b.y;
	return (result);
}

t_vec2		div_vec3(t_vec2 a, t_vec2 b)
{
	t_vec2	result;

	result.x = a.x / b.x;
	result.y = a.y / b.y;
	return (result);
}
