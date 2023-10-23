/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrmin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:41:43 by albaud            #+#    #+#             */
/*   Updated: 2023/10/18 08:44:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minmax.h"

ssize_t	fminindex(t_arr *arr, ssize_t (*min)(), ...)
{
	va_list		l;
	size_t		i;
	ssize_t		res;
	ssize_t		m;
	size_t		index;

	va_start(l, min);
	i = -1;
	index = 0;
	res = 9999999;
	while (++i < arr->size)
	{
		m = min(get(arr, i), l, i, arr);
		if (m < res)
		{
			res = m;
			index = i;
		}
	}
	return (index);
}

t_pointer	fminfound(t_arr *arr, ssize_t (*min)(), ...)
{
	va_list		l;
	size_t		i;
	ssize_t		res;
	ssize_t		m;
	size_t		index;

	va_start(l, min);
	i = -1;
	index = 0;
	res = 9999999;
	while (++i < arr->size)
	{
		m = min(get(arr, i), l, i, arr);
		if (m < res)
		{
			res = m;
			index = i;
		}
	}
	return (get(arr, index));
}

ssize_t	minarr(t_arr *arr, ssize_t (*min)(), ...)
{
	va_list		l;
	size_t		i;
	ssize_t		res;
	ssize_t		m;
	void		*p;

	va_start(l, min);
	i = -1;
	p = get(arr, 0).arr;
	res = 9999999;
	while (++i < arr->size)
	{
		m = min(p, get(arr, i), l, i, arr);
		if (m < res)
		{
			res = m;
			p = get(arr, i).arr;
		}
	}
	return (res);
}

ssize_t	maxarr(t_arr *arr, ssize_t (*min)(), ...)
{
	va_list		l;
	size_t		i;
	ssize_t		res;
	ssize_t		m;
	void		*p;

	va_start(l, min);
	i = -1;
	p = get(arr, 0).arr;
	res = -9999999;
	while (++i < arr->size)
	{
		m = min(p, get(arr, i), l, i, arr);
		if (m > res)
		{
			res = m;
			p = get(arr, i).arr;
		}
	}
	return (res);
}
