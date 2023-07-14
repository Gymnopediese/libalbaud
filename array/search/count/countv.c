/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:15:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

size_t	countv(t_arr *arr, char *target, size_t size)
{
	return (countvin(arr, 0, -1, target, size));
}

size_t	countvfrom(t_arr *arr, size_t s, char *target, size_t size)
{
	return (countvin(arr, s, -1, target, size));
}

size_t	countvto(t_arr *arr, size_t e, char *target, size_t size)
{
	return (countvin(arr, 0, e, target, size));
}

size_t	countvin(t_arr *arr, size_t s, size_t e, char *target, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;

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
