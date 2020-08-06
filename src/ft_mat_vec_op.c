/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_vec_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/06 14:26:07 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function multiplies a 4x4 matrix and a 3D vector producing a 4D vector
**
** [[x1, y1, z1, t1],     [ux]
**  [x2, y2, z2, t2],     [uy]
**  [x3, y3, z3, t3],  *  [uz]
**  [ 0,  0,  0,  1]]     [ 1]
*/

t_vec4			mult_mat4x4_vec3(t_mat4x4 mat, t_vec3 v)
{
	t_vec4		result;
	t_mat4x4	tmp_mat;
	t_vec4		tmp_vec;

	tmp_vec = create_vec4(v.x, v.y, v.z, 1.0);
	tmp_mat = transpose_mat4x4(mat);
	result.x = dot_vec4(tmp_mat.c1, tmp_vec);
	result.y = dot_vec4(tmp_mat.c2, tmp_vec);
	result.z = dot_vec4(tmp_mat.c3, tmp_vec);
	result.w = dot_vec4(tmp_mat.c4, tmp_vec);
	return (result);
}
