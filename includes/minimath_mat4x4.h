/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_mat4x4.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/03 22:42:12 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_MAT4X4_H
# define MINIMATH_MAT4X4_H

/*
** 4x4 Matrix
**
** [[ 0,  1,  2,  3],
**  [ 4,  5,  6,  7],
**  [ 8,  9, 10, 11],
**  [12, 13, 14, 15]]
*/

typedef struct	s_mat4x4
{
	t_vec4		c1;
	t_vec4		c2;
	t_vec4		c3;
	t_vec4		c4;
}				t_mat4x4;

t_mat4x4		create_mat4x4(t_vec4 a, t_vec4 b, t_vec4 c, t_vec4 d);
t_mat4x4		*malloc_mat4x4(t_vec4 a, t_vec4 b, t_vec4 c, t_vec4 d);
void			destroy_mat4x4(t_mat4x4 to_destroy);
void			free_mat4x4(t_mat4x4 *to_free);

t_mat4x4		transpose_mat4x4(t_mat4x4 mat);
t_vec4			mult_mat4x4_vec4(t_mat4x4 mat, t_vec4 v);
t_mat4x4		schur_mat4x4_mat4x4(t_mat4x4 mat1, t_mat4x4 mat2);

#endif
