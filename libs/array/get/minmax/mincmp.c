/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mincmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:41:43 by albaud            #+#    #+#             */
/*   Updated: 2023/07/27 15:17:54 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minmax.h"

t_pointer	fmincmpfound(t_arr *arr, int (*cmp)(), ...)
{
	va_list		l;
	size_t		i;
	t_pointer	p;

	va_start(l, cmp);
	i = 0;
	p = get(arr, 0);
	while (++i < arr->size)
		if (cmp(p, get(arr, i), l, i, arr) < 0)
			p = get(arr, i);
	return (p);
}

t_pointer	mincmpfound(t_arr *arr)
{
	size_t		i;
	t_pointer	p;

	i = 0;
	p = get(arr, 0);
	while (++i < arr->size)
		if (memcmp(p.arr, get(arr, i).arr, arr->elem_size) < 0)
			p = get(arr, i);
	return (p);
}

size_t	fmincmpindex(t_arr *arr, int (*cmp)(), ...)
{
	va_list		l;
	size_t		i;
	t_pointer	p;
	size_t		ind;

	va_start(l, cmp);
	i = 0;
	p = get(arr, 0);
	ind = 0;
	while (++i < arr->size)
	{
		if (cmp(p, get(arr, i), l, i, arr) < 0)
		{
			p = get(arr, i);
			ind = i;
		}
	}
	return (ind);
}

size_t	mincmpindex(t_arr *arr, int (*cmp)(), ...)
{
	va_list		l;
	size_t		i;
	t_pointer	p;
	size_t		ind;

	va_start(l, cmp);
	i = 0;
	ind = 0;
	p = get(arr, 0);
	while (++i < arr->size)
	{
		if (memcmp(p.arr, get(arr, i).arr, arr->elem_size) < 0)
		{
			p = get(arr, i);
			ind = i;
		}
	}
	return (ind);
}
