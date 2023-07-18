/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   center.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:33:18 by albaud            #+#    #+#             */
/*   Updated: 2023/07/07 19:39:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	center(t_arr *arr, size_t size, ...)
{
	va_list	l;
	char	*elem;

	if (size <= arr->size)
		return ;
	va_start(l, size);
	elem = va_arg_len(&l, arr->s_arr);
	centerv(arr, size, elem);
}

void	centerv(t_arr *arr, size_t size, char *elem)
{
	if (size <= arr->size)
		return ;
	size -= arr->size;
	fill_frontv(arr, size / 2, elem);
	size -= size / 2;
	fill_backv(arr, size, elem);
}
