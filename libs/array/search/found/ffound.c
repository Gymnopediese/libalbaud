/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffound.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:35:34 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "found.h"

t_pointer	ffound(t_arr *arr, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = -1;
	va_start(l, condition);
	while (++i < arr->size)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (get(arr, i));
	return ((t_pointer)(void *)(0));
}

t_pointer	fnfound(t_arr *arr, size_t n, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = -1;
	va_start(l, condition);
	while (++i < arr->size)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (get(arr, i));
	return ((t_pointer)(void *)(0));
}

t_pointer	fnrfound(t_arr *arr, size_t n, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = arr->size;
	va_start(l, condition);
	while (--i >= 0)
		if (condition(get(arr, i), l, i, arr) == 1 && n-- == 0)
			return (get(arr, i));
	return ((t_pointer)(void *)(0));
}

t_pointer	frfound(t_arr *arr, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	i = arr->size;
	va_start(l, condition);
	while (--i >= 0)
		if (condition(get(arr, i), l, i, arr) == 1)
			return (get(arr, i));
	return ((t_pointer)(void *)(0));
}
