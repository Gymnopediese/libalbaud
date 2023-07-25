/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:36:57 by albaud            #+#    #+#             */
/*   Updated: 2023/07/22 12:59:23 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../array.h"

t_arr	chunk(t_arr *arr, size_t size)
{
	t_arr	res;
	size_t	i;
	size_t	end;

	res = array(arr->size / size, sizeof(t_arr));
	i = -1;
	while (++i < res.capacity)
	{
		if (i * size + size > arr->size)
			end = arr->size;
		else
			end = i * size + size;
		res.arrays[i] = subarr(arr, i * size, end - 1);
	}
	res.size = res.capacity;
	return (res);
}
