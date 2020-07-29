/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat3x3_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/29 02:24:14 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** 3x3 Matrice
** 
** [[0, 1, 2],   [x,
**  [3, 4, 5], *  y,
**  [6, 7, 8]]    z]
*/

t_mat3x3		mult_mat3x3(t_mat3x3 mat, t_vec3 vec)
{
	t_mat3x3	result;

	result.c1 = mult_vec3(mat.c1, vec);
	result.c2 = mult_vec3(mat.c2, vec);
	result.c3 = mult_vec3(mat.c3, vec);
	return (result);
}

/*
** Hadamard product or Schur product: Operation that takes two matrices of
** same dimensions and produces another matrix of the same dimension
*/

t_mat3x3	schur_mat3x3(t_mat3x3 mat1, t_mat3x3 mat2)
{
	t_mat3x3	result;

	result.c1 = mult_vec3(mat1.c1, mat2.c1);
	result.c2 = mult_vec3(mat1.c2, mat2.c2);
	result.c3 = mult_vec3(mat1.c3, mat2.c3);
	return (result);
}
