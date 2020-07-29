/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat3x3_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/29 02:02:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** 3x3 Matrice
** 
** [[0, 1, 2],   [x,
**  [3, 4, 5], *  y,
**  [6, 7, 8]]    z]
*/

void	mult_mat3x3(t_mat_3x3 result, t_vec3 vec)
{
	result[0] = mult_vec3(result[0], vec);
	result[1] = mult_vec3(result[1], vec);
	result[2] = mult_vec3(result[3], vec);
}
