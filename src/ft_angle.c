/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_angle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 23:36:36 by mboivin           #+#    #+#             */
/*   Updated: 2020/09/30 15:55:48 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** This function converts an angle in degrees to radians
*/

double	degrees_to_radians(double deg_angle)
{
	return ((deg_angle * M_PI) / STRAIGHT_ANGLE);
}

/*
** This function converts an angle in radians to degrees
*/

double	radians_to_degrees(double rad_angle)
{
	return ((rad_angle * STRAIGHT_ANGLE) / M_PI);
}
