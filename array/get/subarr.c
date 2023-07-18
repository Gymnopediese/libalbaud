/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subarr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:47:27 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 00:33:23 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_arr	subarr(t_arr *arr, size_t s, size_t e)
{
	t_arr	res;

	if (e != arr->size)
		minmax(arr, &s, &e);
	res = array(e - s + 1, arr->s_arr);
	extendv(&res, get(arr, s).voidp, res.capacity);
	return (res);
}

t_arr	subright(t_arr *arr, size_t s)
{
	return (subarr(arr, s, -1));
}

t_arr	subleft(t_arr *arr, size_t e)
{
	return (subarr(arr, 0, e));
}

