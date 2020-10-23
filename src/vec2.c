/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/10/24 00:55:16 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "minimath_vec2.h"

/*
** 2D Vector
**
** create_vec2()  :  Constructor
** malloc_vec2()  :  Malloc function
** destroy_vec2() :  Destructor
** free_vec2()    :  Free function
*/

t_vec2		create_vec2(double p_x, double p_y)
{
	t_vec2	result;

	result.x = p_x;
	result.y = p_y;
	return (result);
}

t_vec2		*malloc_vec2(double p_x, double p_y)
{
	t_vec2	*result;

	result = malloc(sizeof(t_vec2));
	if (!result)
		return (NULL);
	*result = create_vec2(p_x, p_y);
	return (result);
}

void		destroy_vec2(t_vec2 to_destroy)
{
	(void)to_destroy;
}

void		free_vec2(t_vec2 *to_free)
{
	destroy_vec2(*to_free);
	free(to_free);
}
