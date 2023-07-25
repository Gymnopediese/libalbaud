/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 03:00:55 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:05:32 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

size_t	countin(t_arr *arr, size_t start, size_t end, t_elem elem)
{
	size_t	i;
	size_t	c;

	i = start - 1;
	c = 0;
	while (++i < end)
		c += (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0);
	return (c);
}

size_t	fcountin(t_arr *arr, size_t start, size_t end, int (*condition)(), ...)
{
	size_t	i;
	size_t	c;
	va_list	l;

	va_start(l, condition);
	i = start - 1;
	c = 0;
	while (++i < end)
		c += (condition(getr(arr, i).voidp, l, i, arr) != 0);
	return (c);
}
