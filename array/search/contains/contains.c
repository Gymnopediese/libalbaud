/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contains.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 04:53:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contains.h"

int	contains(t_arr *arr, ...)
{
	size_t	i;
	char	*target;
	va_list	l;

	va_start(l, arr);
	target = va_arg_len(&l, arr->s_arr);
	i = -1;
	while (++i < arr->size)
		if (memcmpn(get(arr, i), target, arr->s_arr) == 1)
			return (1);
	return (0);
}

int	containsfrom(t_arr *arr, size_t s, ...)
{
	size_t	i;
	char	*target;
	va_list	l;

	inrange(arr, &s);
	va_start(l, s);
	target = va_arg_len(&l, arr->s_arr);
	i = s - 1;
	while (++i < arr->size)
		if (memcmpn(get(arr, i), target, arr->s_arr) == 1)
			return (1);
	return (0);
}

int	containsto(t_arr *arr, size_t e, ...)
{
	size_t	i;
	char	*target;
	va_list	l;

	inrange(arr, &e);
	va_start(l, e);
	target = va_arg_len(&l, arr->s_arr);
	i = -1;
	while (++i < e)
		if (memcmpn(get(arr, i), target, arr->s_arr) == 1)
			return (1);
	return (0);
}

int	containsin(t_arr *arr, size_t s, size_t e, ...)
{
	size_t	i;
	char	*target;
	va_list	l;

	minmax(arr, &s, &e);
	va_start(l, e);
	target = va_arg_len(&l, arr->s_arr);
	i = s - 1;
	while (++i < e)
		if (memcmpn(get(arr, i), target, arr->s_arr) == 1)
			return (1);
	return (0);
}
