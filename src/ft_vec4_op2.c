/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_op2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/18 16:09:15 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function copies 4D vector src to 4D vector dst
*/

void		cpy_vec4(t_vec4 *dst, t_vec4 src)
{
	dst->x = src.x;
	dst->y = src.y;
	dst->z = src.z;
	dst->w = src.w;
}

/*
** This function returns true if 4D vector to_check is null
*/

bool		is_null_vec4(t_vec4 to_check)
{
	if (norm_vec4(to_check) == 0.0)
		return (true);
	return (false);
}
