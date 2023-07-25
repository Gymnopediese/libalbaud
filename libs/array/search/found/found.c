/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:35:51 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "found.h"

t_pointer	nfound(t_arr *arr, ssize_t found, t_elem elem)
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len)
			== 0 && found-- <= 0)
			return (get(arr, i));
	return ((t_pointer)(void *)(0));
}

t_pointer	found(t_arr *arr, t_elem elem)
{
	return (nfound(arr, 0, elem));
}

t_pointer	nrfound(t_arr *arr, ssize_t found, t_elem elem)
{
	size_t	i;

	i = arr->size;
	while (--i >= 0)
		if (memcmp(getr(arr, i).voidp, elem.chars, elem.len)
			== 0 && found-- <= 0)
			return (get(arr, i));
	return ((t_pointer)(void *)(0));
}

t_pointer	rfound(t_arr *arr, t_elem elem)
{
	return (nrfound(arr, 0, elem));
}
