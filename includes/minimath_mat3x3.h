/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_mat3x3.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/20 20:12:11 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_MAT3X3_H
# define MINIMATH_MAT3X3_H

/*
** 3x3 Matrix (Column Major)
**
**    c1 c2 c3
**
** x [0, 3, 6]
** y [1, 4, 7]
** z [2, 5, 8]
*/

typedef struct	s_mat3x3
{
	t_vec3		c1;
	t_vec3		c2;
	t_vec3		c3;
}				t_mat3x3;

t_mat3x3		create_mat3x3(t_vec3 a, t_vec3 b, t_vec3 c);
t_mat3x3		*malloc_mat3x3(t_vec3 a, t_vec3 b, t_vec3 c);
void			destroy_mat3x3(t_mat3x3 to_destroy);
void			free_mat3x3(t_mat3x3 *to_free);

t_mat3x3		transpose_mat3x3(t_mat3x3 mat);
t_vec3			mult_mat3x3_vec3(t_mat3x3 mat, t_vec3 v);
t_mat3x3		mult_mat3x3_mat3x3(t_mat3x3 mat1, t_mat3x3 mat2);
t_mat3x3		scale_mat3x3(double scalar, t_mat3x3 mat);
void			cpy_mat3x3(t_mat3x3 *dst, t_mat3x3 src);
t_mat3x3		identity_mat3x3(void);

#endif
