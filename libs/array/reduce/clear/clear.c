/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:45:11 by albaud            #+#    #+#             */
/*   Updated: 2023/09/22 16:43:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clear.h"

void	clear(t_arr *arr)
{
	arr->size = 0;
	// bzero(arr->arr, arr->size * arr->s_arr);
}

void	clear_excess(t_arr *arr)
{
	t_arr	res;

	res = array(arr->size, arr->s_arr);
	res.size = arr->size;
	res.s_arr = arr->s_arr;
	memcpy(res.arr, arr->arr, arr->size * arr->s_arr);
	delete(arr->arr);
	*arr = res;
}
