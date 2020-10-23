/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:55:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "minimath_vec4.h"

/*
** 4D Vector
**
** create_vec4()  :  Constructor
** malloc_vec4()  :  Malloc function
** destroy_vec4() :  Destructor
** free_vec4()    :  Free function
*/

t_vec4		create_vec4(double p_x, double p_y, double p_z, double p_w)
{
	t_vec4	result;

	result.x = p_x;
	result.y = p_y;
	result.z = p_z;
	result.w = p_w;
	return (result);
}

t_vec4		*malloc_vec4(double p_x, double p_y, double p_z, double p_w)
{
	t_vec4	*result;

	result = malloc(sizeof(t_vec4));
	if (!result)
		return (NULL);
	*result = create_vec4(p_x, p_y, p_z, p_w);
	return (result);
}

void		destroy_vec4(t_vec4 to_destroy)
{
	(void)to_destroy;
}

void		free_vec4(t_vec4 *to_free)
{
	destroy_vec4(*to_free);
	free(to_free);
}
