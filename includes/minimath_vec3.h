/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_vec3.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/28 00:10:59 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_VEC3_H
# define MINIMATH_VEC3_H

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

t_vec3			create_vec3(double p_x, double p_y, double p_z);
t_vec3			*malloc_vec3(double p_x, double p_y, double p_z);
void			destroy_vec3(t_vec3 to_destroy);
void			free_vec3(t_vec3 *to_free);

t_vec3			add_vec3(t_vec3 a, t_vec3 b);
t_vec3			sub_vec3(t_vec3 a, t_vec3 b);
t_vec3			mult_vec3(t_vec3 a, t_vec3 b);
t_vec3			div_vec3(t_vec3 a, t_vec3 b);
t_vec3			scale_vec3(double scalar, t_vec3 vec);

double			dot_vec3(t_vec3 a, t_vec3 b);

#endif
