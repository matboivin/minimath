/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2_op2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/18 16:08:45 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function copies 2D vector src to 2D vector dst
*/

void		cpy_vec2(t_vec2 *dst, t_vec2 src)
{
	dst->x = src.x;
	dst->y = src.y;
}

/*
** This function returns true if 2D vector to_check is null
*/

bool		is_null_vec2(t_vec2 to_check)
{
	if (norm_vec2(to_check) == 0.0)
		return (true);
	return (false);
}
