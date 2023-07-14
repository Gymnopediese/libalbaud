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

size_t	indexofff(t_arr *arr, void *a, int (*condition)())
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
	{
		if (condition(a, get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}

size_t	indexoffffrom(t_arr *arr, size_t s, void *a, int (*condition)())
{
	size_t	i;

	inrange(arr, &s);
	i = s - 1;
	while (++i < arr->size)
	{
		if (condition(a, get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}

size_t	indexofffto(t_arr *arr, size_t e, void *a, int (*condition)())
{
	size_t	i;

	inrange(arr, &e);
	i = -1;
	while (++i < e)
	{
		if (condition(a, get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}

size_t	indexofffin(t_arr *arr, size_t s, size_t e, void *a, int (*condition)())
{
	size_t	i;

	minmax(arr, &s, &e);
	i = s - 1;
	while (++i < e)
	{
		if (condition(a, get(arr, i)) == 1)
			return (i);
	}
	return (-1);
}
