/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:11:08 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 13:01:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "split.h"

t_arr	split(t_arr *arr, t_elem elem)
{
	t_arr	res;
	size_t	start;
	size_t	end;

	res = array(1, sizeof(t_arr));
	start = 0;
	while (1)
	{
		end = indexfrom(arr, start, elem);
		if (end == (size_t) - 1)
		{
			if (start < arr->size)
				append(&res, e(&res, subarr(arr, start, arr->size - 1)));
			return (res);
		}
		if (end != start)
			append(&res, e(&res, subarr(arr, start, end - 1)));
		start = end + elem.len;
		if (start >= arr->size)
			return (res);
	}
}

t_arr	rsplit(t_arr *arr, size_t n, t_elem elem)
{
	t_arr	res;
	size_t	start;
	size_t	end;

	res = array(1, sizeof(t_arr));
	start = 0;
	while (1)
	{
		end = indexfrom(arr, start, elem);
		if (end == (size_t) - 1 || n == 0)
		{
			if (start < arr->size)
				append(&res, e(&res, subarr(arr, start, arr->size - 1)));
			return (res);
		}
		if (end != start)
			append(&res, e(&res, subarr(arr, start, end - 1)));
		start = end + elem.len;
		if (start >= arr->size)
			return (res);
		n--;
	}
}
