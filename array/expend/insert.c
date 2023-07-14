/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:33:05 by albaud            #+#    #+#             */
/*   Updated: 2023/07/11 00:11:18 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	insert(t_arr *arr, size_t index, ...)
{
	size_t	i;
	va_list	l;
	char	*elem;

	va_start(l, index);
	elem = va_arg_len(&l, arr->s_arr);
	arrealloc(arr, 1);
	if (index != arr->size)
		inrange(arr, &index);
	move_right(arr, 1, index, arr->size);
	i = -1;
	while (++i < arr->s_arr)
		arr->arr[i + index * arr->s_arr] = elem[i];
	arr->size += 1;
}

void	insertn(t_arr *arr, size_t index, size_t n, ...)
{
	size_t	i;
	size_t	j;
	va_list	l;
	char	*elem;

	va_start(l, n);
	arrealloc(arr, n);
	move_right(arr, n, index, arr->size);
	j = -1;
	while (++j < n)
	{
		elem = va_arg_len(&l, arr->s_arr);
		i = -1;
		while (++i < arr->s_arr)
			arr->arr[i + index * arr->s_arr] = elem[i];
		arr->size += 1;
		index++;
	}
}

void	inserta(t_arr *arr, t_arr *add, size_t index)
{
	insertv(arr, index, add->arr, add->size);
}

void	insertv(t_arr *arr, size_t index, char *add, size_t len)
{
	size_t	i;
	size_t	j;

	if (index != arr->size)
		inrange(arr, &index);
	arrealloc(arr, len);

	move_right(arr, len, index, arr->size);
	j = -1;
	while (++j < len)
	{
		i = -1;
		while (++i < arr->s_arr)
			arr->arr[i + index * arr->s_arr] = add[j * arr->s_arr + i];
		arr->size += 1;
		index++;
	}
}

void	inserts(t_arr *arr, size_t index, char *add)
{
	insertv(arr, index, add, strlen(add));
}
