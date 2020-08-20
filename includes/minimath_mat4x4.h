/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_mat4x4.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/20 20:12:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_MAT4X4_H
# define MINIMATH_MAT4X4_H

/*
** 4x4 Matrix (Column Major)
**
**    c1  c2  c3  c4
**
** x [ 0,  4,  8, 12]
** y [ 1,  5,  9, 13]
** z [ 2,  6, 10, 14]
** w [ 3,  7, 11, 15]
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
t_mat4x4		invert_mat4x4(t_mat4x4 mat);
t_vec4			mult_mat4x4_vec4(t_mat4x4 mat, t_vec4 v);
t_mat4x4		mult_mat4x4_mat4x4(t_mat4x4 mat1, t_mat4x4 mat2);
t_mat4x4		scale_mat4x4(double scalar, t_mat4x4 mat);
void			cpy_mat4x4(t_mat4x4 *dst, t_mat4x4 src);
t_mat4x4		identity_mat4x4(void);

#endif
