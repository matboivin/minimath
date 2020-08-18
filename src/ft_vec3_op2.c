/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_op2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/18 16:07:45 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function copies 3D vector src to 3D vector dst
*/

void		cpy_vec3(t_vec3 *dst, t_vec3 src)
{
	dst->x = src.x;
	dst->y = src.y;
	dst->z = src.z;
}

/*
** This function returns true if 3D vector to_check is null
*/

bool		is_null_vec3(t_vec3 to_check)
{
	if (norm_vec3(to_check) == 0.0)
		return (true);
	return (false);
}
