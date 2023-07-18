/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 02:06:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 19:20:14 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	remove_at(t_arr *arr, size_t ind)
{
	inrange(arr, &ind);
	ind -= 1;
	while (++ind < arr->size - 1)
	{
		swap(arr, ind, ind + 1);
	}
	arr->size -= 1;
	arr->arr[arr->size] = 0;
}

void	remove_atn(t_arr *arr, size_t ind, size_t n)
{
	while (n-- && ind < arr->size)
		remove_at(arr, ind);
}

int	erase(t_arr *arr, ...)
{
	va_list	l;
	size_t	i;

	va_start(l, arr);
	i = indexofv(arr, va_arg_len(&l, arr->s_arr), 1);
	if (i != (size_t)-1)
	{
		remove_at(arr, i);
		return (1);
	}
	return (0);
}

int	erasev(t_arr *arr, char *elem)
{
	size_t	i;

	i = indexofv(arr, elem, 1);
	if (i != (size_t)-1)
	{
		remove_at(arr, i);
		return (1);
	}
	return (0);
}

void	erasen(t_arr *arr, size_t n, ...)
{
	char	*elem;
	va_list	l;

	va_start(l, n);
	elem = va_arg_len(&l, arr->s_arr);
	while (erasev(arr, elem) && --n < (size_t)-1)
		;
}
