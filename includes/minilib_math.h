/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilib_math.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/27 22:13:19 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINILIB_MATH_H
# define MINILIB_MATH_H

# include <math.h>
# include <stdlib.h>

typedef struct	s_vec2
{
	double		x;
	double		y;
}				t_vec2;

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

t_vec2			create_vec2(double p_x, double p_y);
t_vec2			*malloc_vec2(double p_x, double p_y);
void			destroy_vec2(t_vec2 to_destroy);
void			free_vec2(t_vec2 *to_free);

t_vec2			add_vec2(t_vec2 a, t_vec2 b);
t_vec2			sub_vec2(t_vec2 a, t_vec2 b);
t_vec2			mult_vec2(t_vec2 a, t_vec2 b);
t_vec2			div_vec2(t_vec2 a, t_vec2 b);

t_vec3			create_vec3(double p_x, double p_y, double p_z);
t_vec3			*malloc_vec3(double p_x, double p_y, double p_z);
void			destroy_vec3(t_vec3 to_destroy);
void			free_vec3(t_vec3 *to_free);

t_vec3			add_vec3(t_vec3 a, t_vec3 b);
t_vec3			sub_vec3(t_vec3 a, t_vec3 b);
t_vec3			mult_vec3(t_vec3 a, t_vec3 b);
t_vec3			div_vec3(t_vec3 a, t_vec3 b);

#endif
