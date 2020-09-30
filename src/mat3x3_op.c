/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3x3_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:56:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function transposes a 3x3 matrix
**
**    c1 c2 c3   c1 c2 c3
**
** x [0, 3, 6]  [0, 1, 2]
** y [1, 4, 7]  [3, 4, 7]
** z [2, 5, 8]  [6, 7, 8]
*/

t_mat3x3		transpose_mat3x3(t_mat3x3 mat)
{
	t_mat3x3	result;

	result.c1.x = mat.c1.x;
	result.c1.y = mat.c2.x;
	result.c1.z = mat.c3.x;
	result.c2.x = mat.c1.y;
	result.c2.y = mat.c2.y;
	result.c2.z = mat.c3.y;
	result.c3.x = mat.c1.z;
	result.c3.y = mat.c2.z;
	result.c3.z = mat.c3.z;
	return (result);
}

/*
** This function inverts a 3x3 matrix
**
** [Rx, Ux, Fx]
** [Ry, Uy, Fy]
** [Rz, Uz, Fz]
*/

t_mat3x3		invert_mat3x3(t_mat3x3 mat)
{
	t_mat3x3	result;
	t_vec3		v_x;
	t_vec3		v_y;
	t_vec3		v_z;

	v_x = create_vec3(mat.c1.x, mat.c2.x, mat.c3.x);
	v_x = scale_vec3((UNIT_VALUE / ft_sqr(norm_vec3(v_x))), v_x);
	v_y = create_vec3(mat.c1.y, mat.c2.y, mat.c3.y);
	v_y = scale_vec3((UNIT_VALUE / ft_sqr(norm_vec3(v_y))), v_y);
	v_z = create_vec3(mat.c1.z, mat.c2.z, mat.c3.z);
	v_z = scale_vec3((UNIT_VALUE / ft_sqr(norm_vec3(v_z))), v_z);
	result.c1 = create_vec3(v_x.x, v_x.y, v_x.z);
	result.c2 = create_vec3(v_y.x, v_y.y, v_y.z);
	result.c3 = create_vec3(v_z.x, v_z.y, v_z.z);
	return (result);
}

/*
** This function multiplies a 3x3 matrix and a 3D vector producing a 3D vector
*/

t_vec3			mult_mat3x3_vec3(t_mat3x3 mat, t_vec3 v)
{
	t_vec3		result;
	t_mat3x3	tmp_mat;

	tmp_mat = transpose_mat3x3(mat);
	result.x = dot_vec3(tmp_mat.c1, v);
	result.y = dot_vec3(tmp_mat.c2, v);
	result.z = dot_vec3(tmp_mat.c3, v);
	return (result);
}

/*
** This function multiplies two 3x3 matrices producing a 3x3 matrix
*/

t_mat3x3		mult_mat3x3_mat3x3(t_mat3x3 mat1, t_mat3x3 mat2)
{
	t_mat3x3	result;

	result.c1 = mult_mat3x3_vec3(mat1, mat2.c1);
	result.c2 = mult_mat3x3_vec3(mat1, mat2.c2);
	result.c3 = mult_mat3x3_vec3(mat1, mat2.c3);
	return (result);
}

/*
** This function scales a 3x3 matrix
*/

t_mat3x3		scale_mat3x3(double scalar, t_mat3x3 mat)
{
	t_mat3x3	result;

	result.c1 = scale_vec3(scalar, mat.c1);
	result.c2 = scale_vec3(scalar, mat.c2);
	result.c3 = scale_vec3(scalar, mat.c3);
	return (result);
}
