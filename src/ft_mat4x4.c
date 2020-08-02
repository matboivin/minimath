/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4x4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/02 21:29:52 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** 4x4 Matrix
**
** [[ 0,  1,  2,  3],
**  [ 4,  5,  6,  7],
**  [ 8,  9, 10, 11],
**  [12, 13, 14, 15]]
**
** create_mat4x4()  :  Constructor
** malloc_mat4x4()  :  Malloc function
** destroy_mat4x4() :  Destructor
** free_mat4x4()    :  Free function
*/

t_mat4x4		create_mat4x4(t_vec4 a, t_vec4 b, t_vec4 c, t_vec4 d)
{
	t_mat4x4	result;

	result.c1 = a;
	result.c2 = b;
	result.c3 = c;
	result.c4 = d;
	return (result);
}

t_mat4x4		*malloc_mat4x4(t_vec4 a, t_vec4 b, t_vec4 c, t_vec4 d)
{
	t_mat4x4	*result;

	result = (t_mat4x4 *)malloc(sizeof(t_mat4x4));
	if (result == NULL)
		return (NULL);
	*result = create_mat4x4(a, b, c, d);
	return (result);
}

void			destroy_mat4x4(t_mat4x4 to_destroy)
{
	free_vec4(&to_destroy.c1);
	free_vec4(&to_destroy.c2);
	free_vec4(&to_destroy.c3);
	free_vec4(&to_destroy.c4);
}

void			free_mat4x4(t_mat4x4 *to_free)
{
	destroy_mat4x4(*to_free);
	free(to_free);
}
