/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat3x3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:38:29 by mboivin           #+#    #+#             */
/*   Updated: 2020/08/11 22:47:36 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimath.h"

/*
** 3x3 Matrix (Column Major)
**
**    c1 c2 c3
**
** x [0, 3, 6]
** y [1, 4, 7]
** z [2, 5, 8]
**
** create_mat3x3()   :  Constructor
** malloc_mat3x3()   :  Malloc function
** destroy_mat3x3()  :  Destructor
** free_mat3x3()     :  Free function
** identity_mat3x3() :  Create an identity matrix
*/

t_mat3x3		create_mat3x3(t_vec3 a, t_vec3 b, t_vec3 c)
{
	t_mat3x3	result;

	result.c1 = a;
	result.c2 = b;
	result.c3 = c;
	return (result);
}

t_mat3x3		*malloc_mat3x3(t_vec3 a, t_vec3 b, t_vec3 c)
{
	t_mat3x3	*result;

	result = (t_mat3x3 *)malloc(sizeof(t_mat3x3));
	if (result == NULL)
		return (NULL);
	*result = create_mat3x3(a, b, c);
	return (result);
}

void			destroy_mat3x3(t_mat3x3 to_destroy)
{
	free_vec3(&to_destroy.c1);
	free_vec3(&to_destroy.c2);
	free_vec3(&to_destroy.c3);
}

void			free_mat3x3(t_mat3x3 *to_free)
{
	destroy_mat3x3(*to_free);
	free(to_free);
}

t_mat3x3		identity_mat3x3(void)
{
	t_mat3x3	result;

	result.c1 = create_vec3(1.0, 0.0, 0.0);
	result.c2 = create_vec3(0.0, 1.0, 0.0);
	result.c3 = create_vec3(0.0, 0.0, 1.0);
	return (result);
}
