/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:09:50 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:46:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reduce.h"

void	*memdup(void *src, size_t size)
{
	void	*res;

	res = new(size + 1, 1);
	memcpy(res, src, size);
	return (res);
}

void	*pop_at(t_arr *arr, size_t ind)
{
	void	*res;

	inrange(arr, &ind);
	res = memdup(get(arr, ind), arr->s_arr);
	ind -= 1;
	while (++ind < arr->size - 1)
	{
		swap(arr, ind, ind + 1);
	}
	arr->size -= 1;
	return (res);
}

void	*pop_front(t_arr *arr)
{
	return (pop_at(arr, 0));
}

void	*pop(t_arr *arr)
{
	return (pop_at(arr, -1));
}
