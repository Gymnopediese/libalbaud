/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 04:44:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

size_t	countf(t_arr *arr, int (*condition)(void *))
{
	size_t	i;
	size_t	c;

	c = 0;
	i = -1;
	while (++i < arr->size)
		if (condition(get(arr, i)) == 1)
			c++;
	return (c);
}

size_t	countffrom(t_arr *arr, size_t s, int (*condition)(void *))
{
	size_t	i;
	size_t	c;

	inrange(arr, &s);
	c = 0;
	i = s - 1;
	while (++i < arr->size)
		if (condition(get(arr, i)) == 1)
			c++;
	return (c);
}

size_t	countfto(t_arr *arr, size_t e, int (*condition)(void *))
{
	size_t	i;
	size_t	c;

	inrange(arr, &e);
	c = 0;
	i = -1;
	while (++i < e)
		if (condition(get(arr, i)) == 1)
			c++;
	return (c);
}

size_t	countfin(t_arr *arr, size_t s, size_t e, int (*condition)(void *))
{
	size_t	i;
	size_t	c;

	minmax(arr, &s, &e);
	c = 0;
	i = s - 1;
	while (++i < e)
		if (condition(get(arr, i)) == 1)
			c++;
	return (c);
}
