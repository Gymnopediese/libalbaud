/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:43:53 by albaud            #+#    #+#             */
/*   Updated: 2023/07/19 15:56:22 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

void	fill(t_arr *arr, size_t index, size_t fsize, t_elem elem)
{
	size_t	i;
	size_t	j;
	#if DEBUG == 1
	if ((ssize_t)fsize <= (ssize_t)arr->size)
		return ;
	#endif

	fsize -= arr->size;
	assert(elem.chars == arr->arr, "cannot append array to itself");
	arrealloc(arr, fsize);
	move_right(arr, fsize, index, arr->size);
	i = -1;
	j = 0;
	while (++i < arr->elem_size * fsize)
	{
		arr->arr[index * arr->elem_size + i] = elem.chars[j++];
		j = (j != elem.len) * j;
	}
	arr->size += fsize;
}
