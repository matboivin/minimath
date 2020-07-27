/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/07/27 22:23:21 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

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

	result = (t_vec2 *)malloc(sizeof(t_vec2));
	if (result == NULL)
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
