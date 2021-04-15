/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2021/04/15 18:57:44 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "minimath_vec3.h"

/*
** 3D Vector
**
** create_vec3()  :  Constructor
** malloc_vec3()  :  Malloc function
** destroy_vec3() :  Destructor
** free_vec3()    :  Free function
*/

t_vec3		create_vec3(double p_x, double p_y, double p_z)
{
	t_vec3	result;

	result.x = p_x;
	result.y = p_y;
	result.z = p_z;
	return (result);
}

t_vec3		*malloc_vec3(double p_x, double p_y, double p_z)
{
	t_vec3	*result = NULL;

	result = malloc(sizeof(t_vec3));
	if (!result)
		return (NULL);
	*result = create_vec3(p_x, p_y, p_z);
	return (result);
}

void		destroy_vec3(t_vec3 to_destroy)
{
	(void)to_destroy;
}

void		free_vec3(t_vec3 *to_free)
{
	destroy_vec3(*to_free);
	free(to_free);
}
