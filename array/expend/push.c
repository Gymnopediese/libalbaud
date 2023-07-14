/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:05:05 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 15:55:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	push(t_arr *arr, ...)
{
	size_t	i;
	va_list	l;
	char	*elem;

	va_start(l, arr);
	arrealloc(arr, 1);
	elem = va_arg_len(&l, arr->s_arr);
	i = -1;
	while (++i < arr->s_arr)
		arr->arr[arr->size * arr->s_arr + i] = elem[i];
	arr->size += 1;
}

void	pushv(t_arr *arr, char *elem)
{
	size_t	i;

	arrealloc(arr, 1);
	i = -1;
	while (++i < arr->s_arr)
		arr->arr[arr->size * arr->s_arr + i] = elem[i];
	arr->size += 1;
}

void	pushn(t_arr *arr, size_t n, ...)
{
	size_t	i;
	va_list	l;
	char	*elem;

	va_start(l, n);
	arrealloc(arr, n);
	while (--n < (size_t)-1)
	{
		elem = va_arg_len(&l, arr->s_arr);
		i = -1;
		while (++i < arr->s_arr)
			arr->arr[arr->size * arr->s_arr + i] = elem[i];
		arr->size += 1;
	}
}
