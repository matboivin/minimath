/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_mat3x3.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/29 02:38:25 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_MAT3X3_H
# define MINIMATH_MAT3X3_H

typedef struct	s_mat3x3
{
	t_vec3		c1;
	t_vec3		c2;
	t_vec3		c3;
}				t_mat3x3;

t_mat3x3		create_mat3x3(t_vec3 a, t_vec3 b, t_vec3 c);
t_vec3			mult_mat3x3(t_mat3x3 result, t_vec3 vec);
t_mat3x3		schur_mat3x3(t_mat3x3 mat1, t_mat3x3 mat2);

#endif
