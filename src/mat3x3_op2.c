/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3x3_op2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 12:57:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function copies 3x3 matrix src to 3x3 matrix dst
*/

void			cpy_mat3x3(t_mat3x3 *dst, t_mat3x3 src)
{
	cpy_vec3(&(dst->c1), src.c1);
	cpy_vec3(&(dst->c2), src.c2);
	cpy_vec3(&(dst->c3), src.c3);
}

/*
** This function creates a 3x3 identity matrix
*/

t_mat3x3		identity_mat3x3(void)
{
	t_mat3x3	result;

	result.c1 = create_vec3(1.0, 0.0, 0.0);
	result.c2 = create_vec3(0.0, 1.0, 0.0);
	result.c3 = create_vec3(0.0, 0.0, 1.0);
	return (result);
}
