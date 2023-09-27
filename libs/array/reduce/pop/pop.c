/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:09:50 by albaud            #+#    #+#             */
/*   Updated: 2023/09/22 16:51:34 by albaud           ###   ########.fr       */
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

t_pointer	pop(t_arr *arr, size_t ind)
{
	t_pointer	res;

	inrange(arr, &ind);
	res.arr = memdup(getr(arr, ind).voidp, arr->s_arr);
	remove_at(arr, ind);
	return (res);
}

t_pointer	popfront(t_arr *arr)
{
	return (pop(arr, 0));
}

t_pointer	popback(t_arr *arr)
{
	return (pop(arr, -1));
}
