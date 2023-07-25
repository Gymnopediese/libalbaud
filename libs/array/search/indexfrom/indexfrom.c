/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexfrom.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:36:05 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexfrom.h"

size_t	nindexfrom(t_arr *arr, ssize_t index, size_t start, t_elem elem)
{
	size_t	i;

	i = start - 1;
	while (++i < arr->size)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0 && index-- <= 0)
			return (i);
	return (-1);
}

size_t	indexfrom(t_arr *arr, size_t start, t_elem elem)
{
	return (nindexfrom(arr, 0, start, elem));
}

size_t	nrindexfrom(t_arr *arr, ssize_t index, size_t start, t_elem elem)
{
	size_t	i;

	i = arr->size;
	while (--i >= start)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0 && index-- <= 0)
			return (i);
	return (-1);
}

size_t	rindexfrom(t_arr *arr, size_t start, t_elem elem)
{
	return (nrindexfrom(arr, 0, start, elem));
}
