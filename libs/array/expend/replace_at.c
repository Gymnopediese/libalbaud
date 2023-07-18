/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:44:20 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 20:15:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	replace_at(t_arr *arr, size_t index, ...)
{
	va_list	l;
	char	*elem;

	va_start(l, index);
	elem = va_arg_len(&l, arr->s_arr);
	replace_atv(arr, index, elem);
}

void	replace_atv(t_arr *arr, size_t index, char *elem)
{
	remove_at(arr, index);
	insertv(arr, index, elem, 1);
}
