/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:00:13 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 14:31:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../array.h"

t_pointer	begin(t_arr *arr)
{
	return ((t_pointer)arr->arr);
}

t_pointer	end(t_arr *arr)
{
	return ((t_pointer)(&arr->arr[arr->size * arr->s_arr]));
}

t_pointer	getr(t_arr *arr, size_t index)
{
	inrange(arr, &index);
	return ((t_pointer)(&arr->arr[index * arr->s_arr]));
}

t_pointer	get(t_arr *arr, size_t index)
{
	return ((t_pointer)(void *)((long long)
		(&arr->arr[index * arr->s_arr]) * (index >= 0 && index < arr->size)));
}

t_elem	gete(t_arr *arr, size_t index)
{
	return ((t_elem){{get(arr, index).chars}, 1});
}

t_pointer	get_any(t_arr *arr, size_t index)
{
	incapacity(arr, &index);
	return ((t_pointer)(&arr->arr[index * arr->s_arr]));
}
