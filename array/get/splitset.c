/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:41:19 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 19:48:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_arr	splitset(t_arr *arr, char **sep)
{
	t_arr	res;
	size_t	start;
	size_t	tmp;
	size_t	end;
	size_t	i;
	size_t	size;

	res = array(1, sizeof(t_arr));
	start = 0;
	while (1)
	{
		end = -1;
		i = -1;
		while (sep[++i])
		{
			tmp = indexofvfrom(arr, start, sep[i], strlen(sep[i]));
			if (tmp < (size_t)-1 && tmp < end)
			{
				size = strlen(sep[i]);
				end = tmp;
			}
		}

		if (end == (size_t)-1)
		{
			if (start != arr->size - 1)
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
