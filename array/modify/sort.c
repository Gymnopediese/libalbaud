/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 00:14:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 12:32:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	sort(t_arr *arr, int (*cmp)(void *, void *))
{
	size_t	i;
	size_t	j;
	size_t	f;

	f = 1;
	while (f)
	{
		f = 0;
		i = -1;
		while (++i < arr->size - 1)
		{
			j = i;
			while (++j < arr->size)
				if (cmp(get(arr, i), get(arr, j)) != 0)
					swap(arr, i, j);
		}
	}
}
