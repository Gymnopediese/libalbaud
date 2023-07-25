/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eleml.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 01:25:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 00:11:19 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "elem.h"

t_elem	sl(char *string)
{
	return ((t_elem){{string}, strlen(string)});
}

t_elem	ll(void *elem, size_t len)
{
	return ((t_elem){{elem}, len * 8});
}

t_elem	vl(void *elem)
{
	return ((t_elem){{elem}, 8});
}

t_elem	al(t_arr *arr)
{
	return ((t_elem){{(char *)arr}, sizeof(arr)});
}

t_elem	el(size_t size, ...)
{
	va_list	l;

	va_start(l, size);
	return ((t_elem){{va_arg_len(&l, size)}, size});
}
