/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexoff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 04:28:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "index.h"

size_t	indexoff(t_arr *arr, int (*condition)(void *))
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
	{
		if (condition(get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}

size_t	indexofffrom(t_arr *arr, size_t s, int (*condition)(void *))
{
	size_t	i;

	inrange(arr, &s);
	i = s - 1;
	while (++i < arr->size)
	{
		if (condition(get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}

size_t	indexoffto(t_arr *arr, size_t e, int (*condition)(void *))
{
	size_t	i;

	inrange(arr, &e);
	i = -1;
	while (++i < e)
	{
		if (condition(get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}

size_t	indexoffin(t_arr *arr, size_t s, size_t e, int (*condition)(void *))
{
	size_t	i;

	minmax(arr, &s, &e);
	i = s - 1;
	while (++i < e)
	{
		if (condition(get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}
