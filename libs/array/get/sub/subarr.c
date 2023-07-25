/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subarr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:47:27 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 13:04:42 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../array.h"

t_arr	subarr(t_arr *arr, size_t s, size_t e)
{
	t_arr	res;

	minmaxlen(arr, &s, &e);
	res = array(e - s + 1, arr->s_arr);
	memcpy(res.arr, get(arr, s).arr, arr->elem_size * (e - s + 1));
	res.size = res.capacity;
	return (res);
}

t_arr	subright(t_arr *arr, size_t s)
{
	return (subarr(arr, s, arr->size));
}

t_arr	subleft(t_arr *arr, size_t e)
{
	return (subarr(arr, 0, e));
}

