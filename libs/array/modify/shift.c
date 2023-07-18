/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:35:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 13:14:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modify.h"

void	shift_all_right(t_arr *arr, size_t shift)
{
	size_t	i;

	i = arr->size + shift;
	while (--i >= shift)
		swap(arr, i, i - shift);
}

void	shift_all_left(t_arr *arr, size_t shift)
{
	size_t	i;

	i = -1;
	while (++i < arr->size - shift)
		swap(arr, i, i + shift);
}

void	shift_right(t_arr *arr, size_t shift, size_t start, size_t end)
{
	size_t	i;

	i = end + 1;
	while (--i > start)
		swap(arr, i, i - shift);
}

void	shift_left(t_arr *arr, size_t shift, size_t start, size_t end)
{
	size_t	i;

	i = start - 1;
	while (++i < end)
		swap(arr, i, i + shift);
}
