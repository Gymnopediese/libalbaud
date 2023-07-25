/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexto.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:56:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexto.h"

size_t	nindexto(t_arr *arr, ssize_t index, size_t end, t_elem elem)
{
	size_t	i;

	i = -1;
	while (++i < end)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0 && index-- <= 0)
			return (i);
	return (-1);
}

size_t	indexto(t_arr *arr, size_t end, t_elem elem)
{
	return (nindexto(arr, 0, end, elem));
}

size_t	nrindexto(t_arr *arr, ssize_t index, size_t end, t_elem elem)
{
	size_t	i;

	i = end;
	while (--i >= 0)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0 && index-- <= 0)
			return (i);
	return (-1);
}

size_t	rindexto(t_arr *arr, size_t end, t_elem elem)
{
	return (nrindexto(arr, 0, end, elem));
}
