/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findexfrom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:57:37 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexfrom.h"

size_t	findexfrom(t_arr *arr, size_t start, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = start - 1;
	va_start(l, condition);
	while (++i < arr->size)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}

size_t	fnindexfrom(t_arr *arr, size_t n, size_t start, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = start - 1;
	va_start(l, condition);
	while (++i < arr->size)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	fnrindexfrom(t_arr *arr, size_t n, size_t start, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = arr->size;
	va_start(l, condition);
	while (--i >= start)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	frindexfrom(t_arr *arr, size_t start, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = arr->size;
	va_start(l, condition);
	while (--i >= start)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}
