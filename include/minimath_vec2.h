/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_vec2.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:58:20 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_VEC2_H
# define MINIMATH_VEC2_H
# include <stdbool.h>

typedef struct	s_vec2
{
	double		x;
	double		y;
}				t_vec2;

t_vec2			create_vec2(double p_x, double p_y);
t_vec2			*malloc_vec2(double p_x, double p_y);
void			destroy_vec2(t_vec2 to_destroy);
void			free_vec2(t_vec2 *to_free);

t_vec2			add_vec2(t_vec2 a, t_vec2 b);
t_vec2			sub_vec2(t_vec2 a, t_vec2 b);
t_vec2			mult_vec2(t_vec2 a, t_vec2 b);
t_vec2			div_vec2(t_vec2 a, t_vec2 b);
t_vec2			scale_vec2(double scalar, t_vec2 v);
t_vec2			rev_dir_vec2(t_vec2 v);
void			cpy_vec2(t_vec2 *dst, t_vec2 src);
bool			is_null_vec2(t_vec2 to_check);
double			quadnorm_vec2(t_vec2 v);
double			norm_vec2(t_vec2 v);
t_vec2			normalize_vec2(t_vec2 v);
double			dot_vec2(t_vec2 a, t_vec2 b);

#endif
