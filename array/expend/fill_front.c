/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_front.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:31:47 by albaud            #+#    #+#             */
/*   Updated: 2023/07/07 17:33:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	fill_front(t_arr *arr, size_t ammount, ...)
{
	va_list	l;
	char	*elem;

	va_start(l, ammount);
	elem = va_arg_len(&l, arr->s_arr);
	fillv(arr, 0, ammount, elem);
}

void	fill_frontv(t_arr *arr, size_t ammount, char *elem)
{
	fillv(arr, 0, ammount, elem);
}

void	fill_to_front(t_arr *arr, size_t size, ...)
{
	va_list	l;
	char	*elem;

	if (size <= arr->size)
		return ;
	va_start(l, size);
	elem = va_arg_len(&l, arr->s_arr);
	fill_to_frontv(arr, size, elem);
}

void	fill_to_frontv(t_arr *arr, size_t size, char *elem)
{
	if (size <= arr->size)
		return ;
	fillv(arr, 0, size - arr->size, elem);
}

