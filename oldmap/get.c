/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:02:38 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 12:59:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*getlen(t_map *map, size_t size, void *key)
{
	t_hash	h;
	size_t	i;

	h = hash(key, size);
	i = -1;
	while (++i < map->size)
		if (strcmp(map->hash_table[i].hash, h.hash) == 0)
			return (getv(map, i));
	return (0);
}

void	*getstr(t_map *map, void *key)
{
	t_hash	h;
	size_t	i;

	h = hash(key, strlen(key));
	i = -1;
	while (++i < map->size)
		if (memcmp(map->hash_table[i].hash, h.hash, HASH_SIZE) == 0)
			return (getv(map, i));
	return (0);
}

void	*get(t_map *map, void *key)
{
	t_hash	h;
	size_t	i;

	h = hash(key, sizeof(*key));
	i = -1;
	while (++i < map->size)
		if (strcmp(map->hash_table[i].hash, h.hash) == 0)
			return (getv(map, i));
	return (0);
}
