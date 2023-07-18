/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:35:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/07 17:21:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modify.h"

void	move_all_right(t_arr *arr, size_t move)
{
	size_t	i;

	i = arr->size + move;
	while ((ssize_t)--i >= (ssize_t)move)
		swap_any(arr, i, i - move);
}

void	move_all_left(t_arr *arr, size_t move)
{
	size_t	i;

	i = -1;
	while ((ssize_t)++i < (ssize_t)(arr->size - move))
		swap_any(arr, i, i + move);
}


void	move_right(t_arr *arr, size_t move, size_t start, size_t end)
{
	size_t	i;

	i = end;
	while ((ssize_t)--i >= (ssize_t)start)
		swap_any(arr, i, i + move);
}

void	move_left(t_arr *arr, size_t move, size_t start, size_t end)
{
	size_t	i;

	i = start - 1;
	while ((ssize_t)++i < (ssize_t)end)
		swap_any(arr, i, i + move);
}
