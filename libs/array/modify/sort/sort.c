/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 00:14:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 14:45:17 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	sort(t_arr *arr, int (*cmp)(), ...)
{
	size_t	i;
	size_t	j;
	size_t	f;
	va_list	l;

	f = 1;
	va_start(l, cmp);
	while (f)
	{
		f = 0;
		i = -1;
		while (++i < arr->size - 1)
		{
			j = i;
			while (++j < arr->size)
				if (cmp(getr(arr, i).voidp, getr(arr, j).voidp, l, i, arr) != 0)
					swap(arr, i, j);
		}
	}
}

int	is_sorted(t_arr *arr, int (*cmp)(), ...)
{
	size_t	j;
	va_list	l;

	va_start(l, cmp);
	j = -1;
	while (++j < arr->size - 1)
		if (cmp(getr(arr, j).voidp, getr(arr, j + 1).voidp, l, j, arr) != 0)
			return (0);
	return (1);
}
