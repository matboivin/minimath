/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat3x3_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/18 16:03:34 by mboivin          ###   ########.fr       */
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
