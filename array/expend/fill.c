/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:31:47 by albaud            #+#    #+#             */
/*   Updated: 2023/07/07 17:36:57 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	fill(t_arr *arr, size_t index, size_t ammount, ...)
{
	va_list	l;
	char	*elem;

	va_start(l, ammount);
	elem = va_arg_len(&l, arr->s_arr);
	while (ammount--)
		insertv(arr, index, elem, 1);
}

void	fillv(t_arr *arr, size_t index, size_t ammount, char *elem)
{
	while (ammount--)
		insertv(arr, index, elem, 1);
}

void	fill_to(t_arr *arr, size_t index, size_t size, ...)
{
	va_list	l;
	char	*elem;

	if (size <= arr->size)
		return ;
	va_start(l, size);
	elem = va_arg_len(&l, arr->s_arr);
	while (size > arr->size)
		insertv(arr, index, elem, 1);
}

void	fill_tov(t_arr *arr, size_t index, size_t size, char *elem)
{
	if (size <= arr->size)
		return ;
	while (size > arr->size)
		insertv(arr, index, elem, 1);
}
