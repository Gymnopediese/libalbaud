/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:09:50 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 12:45:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pop.h"

void	*memdup(void *src, size_t size)
{
	void	*res;

	res = new(size + 1, 1);
	memcpy(res, src, size);
	return (res);
}

void	*pop(t_arr *arr, size_t ind)
{
	void	*res;

	inrange(arr, &ind);
	res = memdup(getr(arr, ind).voidp, arr->s_arr);
	remove_at(arr, ind);
	return (res);
}

void	*popfront(t_arr *arr)
{
	return (pop(arr, 0));
}

void	*popback(t_arr *arr)
{
	return (pop(arr, -1));
}
