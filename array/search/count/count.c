/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 04:40:05 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

size_t	count(t_arr *arr, ...)
{
	size_t	i;
	size_t	c;
	char	*target;
	va_list	l;

	va_start(l, arr);
	target = va_arg_len(&l, arr->s_arr);
	i = -1;
	c = 0;
	while (++i < arr->size)
		if (memcmpn(get(arr, i).voidp, target, arr->s_arr) == 1)
			c++;
	return (c);
}

size_t	countfrom(t_arr *arr, size_t s, ...)
{
	size_t	i;
	size_t	c;
	char	*target;
	va_list	l;

	inrange(arr, &s);
	va_start(l, s);
	target = va_arg_len(&l, arr->s_arr);
	i = s - 1;
	c = 0;
	while (++i < arr->size)
		if (memcmpn(get(arr, i).voidp, target, arr->s_arr) == 1)
			c++;
	return (c);
}

size_t	countto(t_arr *arr, size_t e, ...)
{
	size_t	i;
	size_t	c;
	char	*target;
	va_list	l;

	inrange(arr, &e);
	va_start(l, e);
	target = va_arg_len(&l, arr->s_arr);
	i = -1;
	c = 0;
	while (++i < e)
		if (memcmpn(get(arr, i).voidp, target, arr->s_arr) == 1)
			c++;
	return (c);
}

size_t	countin(t_arr *arr, size_t s, size_t e, ...)
{
	size_t	i;
	size_t	c;
	char	*target;
	va_list	l;

	minmax(arr, &s, &e);
	va_start(l, e);
	target = va_arg_len(&l, arr->s_arr);
	i = s - 1;
	c = 0;
	while (++i < e)
		if (memcmpn(get(arr, i).voidp, target, arr->s_arr) == 1)
			c++;
	return (c);
}
