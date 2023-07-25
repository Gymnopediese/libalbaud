/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexof.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:52:53 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexof.h"

size_t	nindexof(t_arr *arr, ssize_t indexof, t_elem elem)
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0 && indexof-- <= 0)
			return (i);
	return (-1);
}

size_t	indexof(t_arr *arr, t_elem elem)
{
	return (nindexof(arr, 0, elem));
}

size_t	nrindexof(t_arr *arr, ssize_t indexof, t_elem elem)
{
	size_t	i;

	i = arr->size;
	while (--i >= 0)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0 && indexof-- <= 0)
			return (i);
	return (-1);
}

size_t	rindexof(t_arr *arr, t_elem elem)
{
	return (nrindexof(arr, 0, elem));
}
