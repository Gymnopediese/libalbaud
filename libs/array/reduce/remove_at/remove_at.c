/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 02:06:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 13:36:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remove_at.h"

void	remove_at(t_arr *arr, size_t ind)
{
	inrange(arr, &ind);
	move_left(arr, 1, ind, arr->size);
	arr->size -= 1;
}

void	nremove_at(t_arr *arr, size_t ind, size_t n)
{
	inrange(arr, &ind);
	move_left(arr, n, ind, arr->size);
	arr->size -= n;
}
