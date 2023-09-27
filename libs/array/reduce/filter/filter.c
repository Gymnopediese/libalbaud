/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:25:07 by albaud            #+#    #+#             */
/*   Updated: 2023/09/22 16:50:57 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filter.h"

void	filter(t_arr *arr, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	va_start(l, condition);
	i = -1;
	while (++i < arr->size)
		if (condition(getr(arr, i).voidp, l, i, arr) != 1)
			remove_at(arr, i--);
}

t_arr	partition(t_arr *arr, int (*condition)(), ...)
{
	size_t	i;
	t_arr	res;
	va_list	l;

	va_start(l, condition);
	res = array(1, arr->s_arr);
	i = -1;
	while (++i < arr->size)
	{
		if (condition(getr(arr, i).voidp, l, i, arr) != 1)
		{
			append(&res, v(getr(arr, i).voidp));
			remove_at(arr, i--);
		}
	}
	return (res);
}
