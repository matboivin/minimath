/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4x4_op2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/18 16:18:01 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function copies 4x4 matrix src to 4x4 matrix dst
*/

void			cpy_mat4x4(t_mat4x4 *dst, t_mat4x4 src)
{
	cpy_vec4(&(dst->c1), src.c1);
	cpy_vec4(&(dst->c2), src.c2);
	cpy_vec4(&(dst->c3), src.c3);
	cpy_vec4(&(dst->c4), src.c4);
}

/*
** This function creates a 4x4 identity matrix
*/

t_mat4x4		identity_mat4x4(void)
{
	t_mat4x4	result;

	result.c1 = create_vec4(1.0, 0.0, 0.0, 0.0);
	result.c2 = create_vec4(0.0, 1.0, 0.0, 0.0);
	result.c3 = create_vec4(0.0, 0.0, 1.0, 0.0);
	result.c4 = create_vec4(0.0, 0.0, 0.0, 1.0);
	return (result);
}
