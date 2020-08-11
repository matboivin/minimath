/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4x4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/11 22:46:14 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** 4x4 Matrix (Column Major)
**
**    c1  c2  c3  c4
**
** x [ 0,  4,  8, 12]
** y [ 1,  5,  9, 13]
** z [ 2,  6, 10, 14]
** w [ 3,  7, 11, 15]
**
** create_mat4x4()   :  Constructor
** malloc_mat4x4()   :  Malloc function
** destroy_mat4x4()  :  Destructor
** free_mat4x4()     :  Free function
** identity_mat4x4() :  Create an identity matrix
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

t_mat4x4		identity_mat4x4(void)
{
	t_mat4x4	result;

	result.c1 = create_vec4(1.0, 0.0, 0.0, 0.0);
	result.c2 = create_vec4(0.0, 1.0, 0.0, 0.0);
	result.c3 = create_vec4(0.0, 0.0, 1.0, 0.0);
	result.c4 = create_vec4(0.0, 0.0, 0.0, 1.0);
	return (result);
}
