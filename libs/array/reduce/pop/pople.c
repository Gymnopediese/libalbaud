/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pople.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:09:50 by albaud            #+#    #+#             */
/*   Updated: 2023/09/22 16:52:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pop.h"

t_pointer	pople(t_arr *arr, size_t ind, size_t len)
{
	t_pointer	res;

	inrange(arr, &ind);
	res.arr = memdup(getr(arr, ind).voidp, arr->s_arr * len);
	nremove_at(arr, ind, len);
	return (res);
}

t_pointer	poplefront(t_arr *arr, size_t len)
{
	return (pople(arr, 0, len));
}

t_pointer	popleback(t_arr *arr, size_t len)
{
	return (pople(arr, -1, len));
}
