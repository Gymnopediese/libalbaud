/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:20:43 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:32:44 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*getpvlen(t_map *map, size_t size, void *key)
{
	char	h[HASH_SIZE];
	size_t	index;

	hash(key, size, h);
	index = indexofff(map, h, has_hash);
	if (index == (size_t)-1)
		return (0);
	return (get(map, index).voidp);
}

void	*getplen(t_map *map, size_t size, ...)
{
	va_list	l;
	char	*key;

	va_start(l, size);
	key = va_arg_len(&l, size);
	return (getpvlen(map, size, key));
}

void	*getpstr(t_map *map, void *key)
{
	return (getpvlen(map, strlen(key), key));
}
