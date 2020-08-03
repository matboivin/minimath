/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_prod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 21:58:05 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

double		dot_vec3(t_vec3 a, t_vec3 b)
{
	double	result;
	t_vec3	tmp;

	tmp = mult_vec3(a, b);
	result = tmp.x + tmp.y + tmp.z;
	return (result);
}

t_vec3		cross(t_vec3 a, t_vec3 b)
{
	t_vec3	result;

	result.x = (a.y * b.z) - (b.y * a.z);
	result.y = (a.z * b.x) - (b.z * a.x);
	result.z = (a.x * b.y) - (b.x * a.y);
	return (result);
}
