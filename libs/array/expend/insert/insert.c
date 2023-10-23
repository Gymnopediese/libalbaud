/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:43:53 by albaud            #+#    #+#             */
/*   Updated: 2023/07/19 15:47:18 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insert.h"

void	insert(t_arr *arr, size_t index, t_elem elem)
{
	size_t	i;

	assert(elem.chars == arr->arr, "cannot append array to itself");
	arrealloc(arr, elem.len);
	inrange(arr, &index);
	move_right(arr, elem.len, index, arr->size);
	i = -1;
	while (++i < arr->elem_size * elem.len)
		arr->arr[index * arr->elem_size + i] = elem.chars[i];
	arr->size += elem.len;
}
