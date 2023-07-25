/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findexof.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:23:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexof.h"

size_t	findexof(t_arr *arr, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = -1;
	va_start(l, condition);
	while (++i < arr->size)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}

size_t	fnindexof(t_arr *arr, size_t n, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = -1;
	va_start(l, condition);
	while (++i < arr->size)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	fnrindexof(t_arr *arr, size_t n, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = arr->size;
	va_start(l, condition);
	while (--i >= 0)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	frindexof(t_arr *arr, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = arr->size;
	va_start(l, condition);
	while (--i >= 0)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}
