/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat3x3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/29 02:19:57 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** 3x3 Matrice
** 
** [[0, 1, 2,]
**  [3, 4, 5],
**  [6, 7, 8]]
*/

t_mat3x3		create_mat3x3(t_vec3 a, t_vec3 b, t_vec3 c)
{
	t_mat3x3	result;

	result.c1 = a;
	result.c2 = b;
	result.c3 = c;
	return (result);
}