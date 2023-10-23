/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:35:35 by albaud            #+#    #+#             */
/*   Updated: 2023/10/23 17:41:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

void	mymemcpy(char *a, char *b, int n)
{
	while (n--)
		*a++ = *b++;
}

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
	mymemcpy(get(arr, start).arr,
		get(arr, start + move).arr, arr->elem_size * (end - start - move));
	bzero(&arr->arr[(end - move)
		* arr->elem_size], (arr->capacity - end + move) * arr->elem_size);
}

// abcde
// abcde
