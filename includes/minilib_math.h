/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilib_math.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/27 21:56:51 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINILIB_MATH_H
# define MINILIB_MATH_H

# include <math.h>

typedef struct	s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

t_vec3			create_vec3(double p_x, double p_y, double p_z);
t_vec3			add_vec3(t_vec3 a, t_vec3 b);
t_vec3			sub_vec3(t_vec3 a, t_vec3 b);
t_vec3			mult_vec3(t_vec3 a, t_vec3 b);
t_vec3			div_vec3(t_vec3 a, t_vec3 b);

#endif
