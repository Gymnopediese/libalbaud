/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 13:19:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "index.h"

size_t	indexofv(t_arr *arr, char *target, size_t size)
{
	return (indexofvin(arr, 0, arr->size, target, size));
}

size_t	indexofvfrom(t_arr *arr, size_t s, char *target, size_t size)
{
	return (indexofvin(arr, s, arr->size, target, size));
}

size_t	indexofvto(t_arr *arr, size_t e, char *target, size_t size)
{
	return (indexofvin(arr, 0, e, target, size));
}

size_t	indexofvin(t_arr *arr, size_t s, size_t e, char *target, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;

	minmaxlen(arr, &s, &e);
	i = s - 1;
	c = 0;
	while (++i < e)
	{
		j = 0;
		while (i + j < arr->size && memcmpn(get(arr, i + j),
				&target[j * arr->s_arr], arr->s_arr) == 1)
			j++;
		if (j == size)
			return (i);
	}
	return (-1);
}
