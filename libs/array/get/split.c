/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:11:08 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 13:20:32 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_arr	split(t_arr *arr, char *sep, size_t size)
{
	t_arr	res;
	size_t	start;
	size_t	end;

	res = array(1, sizeof(t_arr));
	start = 0;
	while (1)
	{
		end = indexofvfrom(arr, start, sep, size);
		if (end == (size_t)-1)
		{
			if (start < arr->size)
				push(&res, subarr(arr, start, arr->size - 1));
			return (res);
		}
		if (end != start)
			push(&res, subarr(arr, start, end - 1));
		start = end + size;
		if (start >= arr->size)
			return (res);
	}
}

t_arr	splits(t_arr *arr, char *sep)
{
	return (split(arr, sep, strlen(sep)));
}

t_arr	splitc(t_arr *arr, char sep)
{
	return (split(arr, &sep, 1));
}
