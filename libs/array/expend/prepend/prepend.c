/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepend.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:17:09 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:30:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prepend.h"

void	prepend(t_arr *arr, t_elem elem)
{
	size_t	i;

	arrealloc(arr, elem.len);
	move_all_right(arr, elem.len);
	i = -1;
	while (++i < arr->s_arr * elem.len)
		arr->arr[i] = elem.chars[i];
	arr->size += elem.len;
}
