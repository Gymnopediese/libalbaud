/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findexto.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:56:59 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "indexto.h"

size_t	findexto(t_arr *arr, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = -1;
	va_start(l, condition);
	while (++i < end)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}

size_t	fnindexto(t_arr *arr, size_t n, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = -1;
	va_start(l, condition);
	while (++i < end)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	fnrindexto(t_arr *arr, size_t n, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = end;
	va_start(l, condition);
	while (--i >= 0)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (i);
	return (-1);
}

size_t	frindexto(t_arr *arr, size_t end, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = end;
	va_start(l, condition);
	while (--i >= 0)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (i);
	return (-1);
}
