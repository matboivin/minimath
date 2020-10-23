/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_vec4.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:58:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_VEC4_H
# define MINIMATH_VEC4_H
# include <stdbool.h>

typedef struct	s_vec4
{
	double		x;
	double		y;
	double		z;
	double		w;
}				t_vec4;

t_vec4			create_vec4(double p_x, double p_y, double p_z, double p_w);
t_vec4			*malloc_vec4(double p_x, double p_y, double p_z, double p_w);
void			destroy_vec4(t_vec4 to_destroy);
void			free_vec4(t_vec4 *to_free);

t_vec4			add_vec4(t_vec4 a, t_vec4 b);
t_vec4			sub_vec4(t_vec4 a, t_vec4 b);
t_vec4			mult_vec4(t_vec4 a, t_vec4 b);
t_vec4			div_vec4(t_vec4 a, t_vec4 b);
t_vec4			scale_vec4(double scalar, t_vec4 v);
t_vec4			rev_dir_vec4(t_vec4 v);
void			cpy_vec4(t_vec4 *dst, t_vec4 src);
bool			is_null_vec4(t_vec4 to_check);
double			quadnorm_vec4(t_vec4 v);
double			norm_vec4(t_vec4 v);
t_vec4			normalize_vec4(t_vec4 v);
double			dot_vec4(t_vec4 a, t_vec4 b);

#endif
