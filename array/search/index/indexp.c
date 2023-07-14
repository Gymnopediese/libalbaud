/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexofp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 04:36:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "index.h"

size_t	indexofp(t_arr *arr, void *target)
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (get(arr, i) == target)
			return (i);
	return (-1);
}

size_t	indexofpfrom(t_arr *arr, size_t s, void *target)
{
	size_t	i;

	inrange(arr, &s);
	i = s - 1;
	while (++i < arr->size)
		if (get(arr, i) == target)
			return (i);
	return (-1);
}

size_t	indexofpto(t_arr *arr, size_t e, void *target)
{
	size_t	i;

	inrange(arr, &e);
	i = -1;
	while (++i < e)
		if (get(arr, i) == target)
			return (i);
	return (-1);
}

size_t	indexofpin(t_arr *arr, size_t s, size_t e, void *target)
{
	size_t	i;

	minmax(arr, &s, &e);
	i = s - 1;
	while (++i < e)
		if (get(arr, i) == target)
			return (i);
	return (-1);
}
