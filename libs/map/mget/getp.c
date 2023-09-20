/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:20:43 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 22:28:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mget.h"

t_pair	*getpair(t_map *map, t_elem key)
{
	char	h[HASH_SIZE];
	size_t	index;

	hash(key.arr, key.len, h);
	index = findexof(map, has_hash, h);
	if (index == (size_t)-1)
		return (0);
	return (getr(map, index).pairs);
}

// void	*getplen(t_map *map, size_t size, ...)
// {
// 	va_list	l;
// 	char	*key;

// 	va_start(l, size);
// 	key = va_arg_len(&l, size);
// 	return (getpvlen(map, size, key));
// }

// void	*getpstr(t_map *map, void *key)
// {
// 	return (getpvlen(map, strlen(key), key));
// }
