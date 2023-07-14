/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:31:47 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 23:14:05 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	fill_back(t_arr *arr, size_t ammount, ...)
{
	va_list	l;
	char	*elem;

	va_start(l, ammount);
	elem = va_arg_len(&l, arr->s_arr);
	fill_backv(arr, ammount, elem);
}

void	fill_backv(t_arr *arr, size_t ammount, char *elem)
{
	while (ammount--)
		pushv(arr, elem);
}

void	fill_to_back(t_arr *arr, size_t size, ...)
{
	va_list	l;
	char	*elem;

	if (size <= arr->size)
		return ;
	va_start(l, size);
	elem = va_arg_len(&l, arr->s_arr);
	fill_to_backv(arr, size, elem);
}

void	fill_to_backv(t_arr *arr, size_t size, char *elem)
{
	if (size <= arr->size)
		return ;
	while (size > arr->size)
		pushv(arr, elem);
}
