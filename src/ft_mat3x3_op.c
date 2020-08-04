/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat3x3_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/04 13:50:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** Transpose 3x3 Matrix
**
** [[0, 1, 2],  [[0, 3, 6],
**  [3, 4, 5],   [1, 4, 7],
**  [6, 7, 8]]   [2, 5, 8]]
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
** 3x3 Matrix
**
** [[0, 1, 2],
**  [3, 4, 5],
**  [6, 7, 8]]
*/

t_vec3			mult_mat3x3_vec3(t_mat3x3 mat, t_vec3 v)
{
	t_mat3x3	tmp_mat;
	t_vec3		result;

	tmp_mat = transpose_mat3x3(mat);
	result.x = dot_vec3(tmp_mat.c1, v);
	result.y = dot_vec3(tmp_mat.c2, v);
	result.z = dot_vec3(tmp_mat.c3, v);
	return (result);
}

/*
** Hadamard product or Schur product: Operation that takes two matrices of
** same dimensions and produces another matrix of the same dimension
*/

t_mat3x3		schur_mat3x3(t_mat3x3 mat1, t_mat3x3 mat2)
{
	t_mat3x3	result;

	result.c1 = mult_mat3x3_vec3(mat1, mat2.c1);
	result.c2 = mult_mat3x3_vec3(mat1, mat2.c2);
	result.c3 = mult_mat3x3_vec3(mat1, mat2.c3);
	return (result);
}
