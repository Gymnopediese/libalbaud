/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:02:15 by albaud            #+#    #+#             */
/*   Updated: 2023/09/21 00:08:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_arr	l_array(size_t elem_size, void *e, size_t len)
{
	t_arr	res;

	res = array(len, elem_size);
	res.len = len;
	memcpy(res.arr, e, elem_size * len);
	return (res);
}

t_arr	n_array(size_t elem_size, size_t len, ...)
{
	t_arr	res;
	va_list	l;

	va_start(l, len);
	res = array(len, elem_size);
	while (len--)
		append(&res, v(va_arg_len(&l, elem_size)));
	return (res);
}

t_arr	e_array(size_t elem_size, ...)
{
	va_list	l;

	va_start(l, elem_size);
	return (l_array(elem_size, va_arg_len(&l, elem_size), 1));
}

t_arr	s_array(char *str)
{
	return (l_array(1, str, strlen(str)));
}

t_arr	v_array(size_t elem_size, void *elem)
{
	return (l_array(elem_size, elem, 1));
}
