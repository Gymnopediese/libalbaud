/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2darr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:28:21 by albaud            #+#    #+#             */
/*   Updated: 2023/07/28 13:35:37 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dimention.h"

t_arr	array2d(size_t x, size_t y, size_t elem_size)
{
	t_arr	arr;
	size_t	i;

	arr = array(x, sizeof(t_arr));
	i = -1;
	while (++i < x)
		arr.arrays[i] = array(y, elem_size);
	return (arr);
}

t_arr	array3d(size_t x, size_t y, size_t z, size_t elem_size)
{
	t_arr	arr;
	size_t	i;

	arr = array(x, sizeof(t_arr));
	i = -1;
	while (++i < x)
		arr.arrays[i] = array2d(y, z, elem_size);
	return (arr);
}


