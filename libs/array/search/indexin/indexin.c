/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:55:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexin.h"

size_t	nindexin(t_arr *arr, ssize_t index, size_t start, size_t end, t_elem elem)
{
	size_t	i;

	minmaxlen(arr, &start, &end);
	i = start - 1;
	while (++i < end)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len)
			== 0 && index-- <= 0)
			return (i);
	return (-1);
}

size_t	indexin(t_arr *arr, size_t start, size_t end, t_elem elem)
{
	return (nindexin(arr, 0, start, end, elem));
}

size_t	nrindexin(t_arr *arr, ssize_t index, size_t start, size_t end, t_elem elem)
{
	size_t	i;

	minmaxlen(arr, &start, &end);
	i = end;
	while (--i >= start)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len)
			== 0 && index-- <= 0)
			return (i);
	return (-1);
}

size_t	rindexin(t_arr *arr, size_t start, size_t end, t_elem elem)
{
	return (nrindexin(arr, 0, start, end, elem));
}
