/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 14:10:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

size_t	counts(t_arr *arr, char *target)
{
	return (countsin(arr, 0, -1, target));
}

size_t	countsfrom(t_arr *arr, size_t s, char *target)
{
	return (countsin(arr, s, -1, target));
}

size_t	countsto(t_arr *arr, size_t e, char *target)
{
	return (countsin(arr, 0, e, target));
}

size_t	countsin(t_arr *arr, size_t s, size_t e, char *target)
{
	size_t	i;
	size_t	j;
	size_t	size;
	size_t	c;

	size = strlen(target);
	minmax(arr, &s, &e);
	i = s - 1;
	c = 0;
	while (++i < e)
	{
		j = 0;
		while (memcmpn(get(arr, i + j),
				&target[j * arr->s_arr], arr->s_arr) == 1)
			j++;
		if (j == size)
			c++;
	}
	return (c);
}
