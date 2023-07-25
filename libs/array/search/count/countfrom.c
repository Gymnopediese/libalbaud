/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countfrom.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 03:00:55 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:06:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

size_t	countfrom(t_arr *arr, size_t start, t_elem elem)
{
	size_t	i;
	size_t	c;

	i = start - 1;
	c = 0;
	while (++i < arr->size)
		c += (memcmp(getr(arr, i).voidp, elem.chars, elem.len) == 0);
	return (c);
}

size_t	fcountfrom(t_arr *arr, size_t start, int (*condition)(), ...)
{
	size_t	i;
	size_t	c;
	va_list	l;

	va_start(l, condition);
	i = start - 1;
	c = 0;
	while (++i < arr->size)
		c += (condition(getr(arr, i).voidp, l, i, arr) != 0);
	return (c);
}
