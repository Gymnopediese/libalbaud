/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 01:21:25 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 02:29:41 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "append.h"

void	append(t_arr *arr, t_elem elem)
{
	size_t	i;

	assert(elem.chars == arr->arr, "cannot append array to itself");
	arrealloc(arr, elem.len);
	i = -1;
	while (++i < arr->elem_size * elem.len)
		arr->arr[arr->size * arr->elem_size + i] = elem.chars[i];
	arr->len += elem.len;
}

void	vappend(t_arr *arr, va_list *l)
{
	size_t	i;
	t_elem	elem;

	elem = va_arg(*l, t_elem);
	assert(elem.chars == arr->arr, "cannot append array to itself");
	arrealloc(arr, elem.len);
	i = -1;
	while (++i < arr->elem_size * elem.len)
		arr->arr[arr->size * arr->elem_size + i] = elem.chars[i];
	arr->len += elem.len;
}
