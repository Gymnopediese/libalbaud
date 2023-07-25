/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findexin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:55:14 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexin.h"

size_t	findexin(t_arr *arr, size_t start, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	minmaxlen(arr, &start, &end);
	i = start - 1;
	va_start(l, condition);
	while (++i < end)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}

size_t	fnindexin(t_arr *arr, size_t n, size_t start, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	minmaxlen(arr, &start, &end);
	i = start - 1;
	va_start(l, condition);
	while (++i < end)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	fnrindexin(t_arr *arr, size_t n, size_t start, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	minmaxlen(arr, &start, &end);
	i = end;
	va_start(l, condition);
	while (--i >= start)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	frindexin(t_arr *arr, size_t start, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	minmaxlen(arr, &start, &end);
	i = end;
	va_start(l, condition);
	while (--i >= start)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}
