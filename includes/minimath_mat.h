/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimath_mat.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:32:52 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/29 01:58:18 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMATH_MAT_H
# define MINIMATH_MAT_H

typedef t_vec3	t_mat_3x3[3];


void			create_mat3x3(t_mat_3x3 result, t_vec3 a, t_vec3 b, t_vec3 c);
void			mult_mat3x3(t_mat_3x3 result, t_vec3 vec);

#endif
