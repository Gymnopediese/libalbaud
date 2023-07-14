/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_front.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:33:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 13:20:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	push_front(t_arr *arr, ...)
{
	size_t	i;
	va_list	l;
	char	*elem;

	va_start(l, arr);
	arrealloc(arr, 1);
	move_all_right(arr, 1);
	elem = va_arg_len(&l, arr->s_arr);
	i = -1;
	while (++i < arr->s_arr)
		arr->arr[i] = elem[i];
	arr->size += 1;
}

void	push_frontv(t_arr *arr, char *elem)
{
	size_t	i;

	if (arr->capacity == arr->size)
		arrealloc(arr, 1);
	move_all_right(arr, 1);
	i = -1;
	while (++i < arr->s_arr)
		arr->arr[i] = elem[i];
	arr->size += 1;
}

void	push_frontn(t_arr *arr, size_t n, ...)
{
	size_t	i;
	size_t	j;
	va_list	l;
	char	*elem;

	va_start(l, n);
	arrealloc(arr, n);
	move_all_right(arr, n);
	j = -1;
	while (++j < n)
	{
		elem = va_arg_len(&l, arr->s_arr);
		i = -1;
		while (++i < arr->s_arr)
			arr->arr[j * arr->s_arr + i] = elem[i];
		arr->size += 1;
	}
}
