/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:33:00 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 14:39:47 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "join.h"

t_arr	join(t_arr *arr, t_elem separator)
{
	t_arr	res;
	size_t	i;

	res = array(arr->size, arr->arrays->elem_size);
	i = -1;
	while (++i < arr->size)
	{
		append(&res, a(&arr->arrays[i]));
		if (i < arr->size - 1)
			append(&res, separator);
	}
	return (res);
}
