/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4x4_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 23:07:41 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** 4x4 Matrix
**
** [[ 0,  1,  2,  3],  [[ 0,  4,  8, 12],
**  [ 4,  5,  6,  7],   [ 1,  5,  9, 13],
**  [ 8,  9, 10, 11],   [ 2,  6, 10, 14],
**  [12, 13, 14, 15]]   [ 3,  7, 11, 15]]
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
** 4x4 Matrix
**
** [[ 0,  1,  2,  3],
**  [ 4,  5,  6,  7],
**  [ 8,  9, 10, 11],
**  [12, 13, 14, 15]]
*/

t_vec4			mult_mat4x4_vec4(t_mat4x4 mat, t_vec4 v)
{
	t_mat4x4	tmp_mat;
	t_vec4		result;

	tmp_mat = transpose_mat4x4(mat);
	result.x = dot_vec4(tmp_mat.c1, v);
	result.y = dot_vec4(tmp_mat.c2, v);
	result.z = dot_vec4(tmp_mat.c3, v);
	result.w = dot_vec4(tmp_mat.c4, v);
	return (result);
}

/*
** Hadamard product or Schur product: Operation that takes two matrices of
** same dimensions and produces another matrix of the same dimension
*/

t_mat4x4		schur_mat4x4(t_mat4x4 mat1, t_mat4x4 mat2)
{
	t_mat4x4	result;

	result.c1 = mult_mat4x4_vec4(mat1, mat2.c1);
	result.c2 = mult_mat4x4_vec4(mat1, mat2.c2);
	result.c3 = mult_mat4x4_vec4(mat1, mat2.c3);
	result.c4 = mult_mat4x4_vec4(mat1, mat2.c4);
	return (result);
}
