/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:00:13 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 00:33:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_pointer	begin(t_arr *arr)
{
	return ((t_pointer)arr->arr);
}

t_pointer	end(t_arr *arr)
{
	return ((t_pointer)(&arr->arr[arr->size * arr->s_arr]));
}

// const t_pointer	cbegin(t_arr *arr)
// {
// 	return ((t_pointer)arr->arr);
// }

// const t_pointer	cend(t_arr *arr)
// {
// 	return ((t_pointer)(&arr->arr[arr->size * arr->s_arr]));
// }

t_pointer	get(t_arr *arr, size_t index)
{
	inrange(arr, &index);
	return ((t_pointer)(&arr->arr[index * arr->s_arr]));
}

t_pointer	get_any(t_arr *arr, size_t index)
{
	incapacity(arr, &index);
	return ((t_pointer)(&arr->arr[index * arr->s_arr]));
}
