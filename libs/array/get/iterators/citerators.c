/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   citerators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:00:13 by albaud            #+#    #+#             */
/*   Updated: 2023/07/22 13:01:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../array.h"

t_cpointer	cbegin(t_arr *arr)
{
	return ((t_cpointer)(const char *)arr->arr);
}

t_cpointer	cend(t_arr *arr)
{
	return ((t_cpointer)(const char *)(&arr->arr[arr->size * arr->s_arr]));
}

t_cpointer	cget(t_arr *arr, size_t index)
{
	inrange(arr, &index);
	return ((t_cpointer)(const char *)(&arr->arr[index * arr->s_arr]));
}

t_cpointer	cget_any(t_arr *arr, size_t index)
{
	incapacity(arr, &index);
	return ((t_cpointer)(const char *)(&arr->arr[index * arr->s_arr]));
}
