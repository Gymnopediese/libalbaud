/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:55:38 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 12:57:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int	remove_keylen(t_map *map, size_t size, void *key)
{
	char	h[HASH_SIZE];

	hash(key, size, h);
	return (remove_iff(map, h, has_hash));
}


int	remove_keystr(t_map *map, void *key)
{
	return (remove_keylen(map, strlen(key), key));
}

int	remove_key(t_map *map, size_t size, ...)
{
	va_list	l;
	char	*key;

	va_start(l, size);
	key = va_arg_len(&l, size);
	return (remove_keylen(map, size, key));
}
