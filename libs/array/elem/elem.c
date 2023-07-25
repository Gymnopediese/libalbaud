/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 01:25:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:58:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "elem.h"

t_elem	s(char *string)
{
	return ((t_elem){{string}, strlen(string)});
}

t_elem	l(void *elem, size_t len)
{
	return ((t_elem){{elem}, len});
}

t_elem	v(void *elem)
{
	return ((t_elem){{elem}, 1});
}

t_elem	a(t_arr *arr)
{
	return ((t_elem){{arr->arr}, arr->len});
}

t_elem	e(t_arr *arr, ...)
{
	va_list	l;

	va_start(l, arr);
	return ((t_elem){{va_arg_len(&l, arr->elem_size)}, 1});
}
