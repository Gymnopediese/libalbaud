/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:53:19 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 20:22:37 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	replace(t_arr *arr, ...)
{
	va_list	l;
	char	*a;
	char	*b;

	va_start(l, arr);
	a = va_arg_len(&l, arr->s_arr);
	b = va_arg_len(&l, arr->s_arr);
	replacev(arr, a, b);
}

void	replacev(t_arr *arr, char *a, char *b)
{
	size_t	index;

	index = indexofv(arr, a, 1);
	if (index == (size_t)-1)
		return ;
	replace_atv(arr, index, b);
}
