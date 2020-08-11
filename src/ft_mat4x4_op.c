/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4x4_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/11 22:54:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function transposes a 4x4 matrix
**
**    c1  c2  c3  c4    c1  c2  c3  c4
**
** x [ 0,  4,  8, 12]  [ 0,  1,  2,  3]
** y [ 1,  5,  9, 13]  [ 4,  5,  6,  7]
** z [ 2,  6, 10, 14]  [ 8,  9, 10, 11]
** w [ 3,  7, 11, 15]  [12, 13, 14, 15]
*/

t_mat4x4		transpose_mat4x4(t_mat4x4 mat)
{
	t_mat4x4	result;

	result.c1.x = mat.c1.x;
	result.c1.y = mat.c2.x;
	result.c1.z = mat.c3.x;
	result.c1.w = mat.c4.x;
	result.c2.x = mat.c1.y;
	result.c2.y = mat.c2.y;
	result.c2.z = mat.c3.y;
	result.c2.w = mat.c4.y;
	result.c3.x = mat.c1.z;
	result.c3.y = mat.c2.z;
	result.c3.z = mat.c3.z;
	result.c3.w = mat.c4.z;
	result.c4.x = mat.c1.w;
	result.c4.y = mat.c2.w;
	result.c4.z = mat.c3.w;
	result.c4.w = mat.c4.w;
	return (result);
}

/*
** This function inverts a 4x4 matrix
**
** [Rx, Ux, Fx, Tx]
** [Ry, Uy, Fy, Ty]
** [Rz, Uz, Fz, Tz]
** [0., 0., 0., 1.]
*/

t_mat4x4		invert_mat4x4(t_mat4x4 mat)
{
	t_mat4x4	result;
	t_vec3		v_x;
	t_vec3		v_y;
	t_vec3		v_z;
	t_vec3		v_trans;

	v_x = create_vec3(mat.c1.x, mat.c2.x, mat.c3.x);
	v_x = scale_vec3((1 / ft_sqr(norm_vec3(v_x))), v_x);
	v_y = create_vec3(mat.c1.y, mat.c2.y, mat.c3.y);
	v_y = scale_vec3((1 / ft_sqr(norm_vec3(v_y))), v_y);
	v_z = create_vec3(mat.c1.z, mat.c2.z, mat.c3.z);
	v_z = scale_vec3((1 / ft_sqr(norm_vec3(v_z))), v_z);
	v_trans = scale_vec3(-1, create_vec3(mat.c4.x, mat.c4.y, mat.c4.z));
	result.c1 = create_vec4(v_x.x, v_x.y, v_x.z, 0.0);
	result.c2 = create_vec4(v_y.x, v_y.y, v_y.z, 0.0);
	result.c3 = create_vec4(v_z.x, v_z.y, v_z.z, 0.0);
	result.c4 = create_vec4(
		dot_vec3(v_trans, v_x),
		dot_vec3(v_trans, v_y),
		dot_vec3(v_trans, v_z),
		1.0);
	return (result);
}

/*
**  This function multiplies a 4x4 matrix and a 4D vector producing a 4D vector
*/

t_vec4			mult_mat4x4_vec4(t_mat4x4 mat, t_vec4 v)
{
	t_vec4		result;
	t_mat4x4	tmp_mat;

	tmp_mat = transpose_mat4x4(mat);
	result.x = dot_vec4(tmp_mat.c1, v);
	result.y = dot_vec4(tmp_mat.c2, v);
	result.z = dot_vec4(tmp_mat.c3, v);
	result.w = dot_vec4(tmp_mat.c4, v);
	return (result);
}

/*
**  This function multiplies two 4x4 matrices producing a 4x4 matrix
*/

t_mat4x4		mult_mat4x4_mat4x4(t_mat4x4 mat1, t_mat4x4 mat2)
{
	t_mat4x4	result;

	result.c1 = mult_mat4x4_vec4(mat1, mat2.c1);
	result.c2 = mult_mat4x4_vec4(mat1, mat2.c2);
	result.c3 = mult_mat4x4_vec4(mat1, mat2.c3);
	result.c4 = mult_mat4x4_vec4(mat1, mat2.c4);
	return (result);
}
