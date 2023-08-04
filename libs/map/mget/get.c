/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:02:38 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 21:54:18 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mget.h"

t_pointer	mget(t_map *map, t_elem elem)
{
	t_pair	*res;

	res = getpair(map, elem);
	if (res == 0)
		return ((t_pointer)(void *)0);
	return ((t_pointer)res->value.arr);
}

// void	*getstr(t_map *map, void *key)
// {
// 	return (getvlen(map, strlen(key), key));
// }

// void	*getlen(t_map *map, size_t size, ...)
// {
// 	va_list	l;
// 	char	*key;

// 	va_start(l, size);
// 	key = va_arg_len(&l, size);
// 	return (getvlen(map, size, key));
// }

