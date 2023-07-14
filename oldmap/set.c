/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:17:15 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:46:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*memdup(void *src, size_t size)
{
	void	*res;

	res = new(size, 1);
	memcpy(res, src, size);
	return (res);
}

t_hash	hash(char *o, size_t size)
{
	t_hash	res;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (++i < size)
	{
		if (++j > HASH_SIZE)
			j = 0;
		res.hash[j] = o[i] ^ '#';
		res.hash[j] = res.hash[j] ^ 'h';
		res.hash[j] = res.hash[j] ^ 'a';
		res.hash[j] = res.hash[j] ^ 's';
		res.hash[j] = res.hash[j] ^ 'h';
	}
	while (i < HASH_SIZE && j++ < HASH_SIZE)
		res.hash[j] = 0;
	return (res);
}

void	setlen(t_map *map, void *key, size_t size, void *val)
{

	if (map->size == map->capacity)
		remap(map);
	map->keys[map->size].s_key = size;
	map->hash_table[map->size] = hash(key, map->keys[map->size].s_key);
	map->keys[map->size].key = memdup(key, map->keys[map->size].s_key);
	memcpy(end(map), val, map->s_values);
	map->size += 1;
}

void	setstr(t_map *map, void *key, void *val)
{

	if (map->size == map->capacity)
		remap(map);
	map->keys[map->size].s_key = strlen(key);
	map->hash_table[map->size] = hash(key, map->keys[map->size].s_key);
	map->keys[map->size].key = memdup(key, map->keys[map->size].s_key + 1);
	printf("str %s\n", map->keys[map->size].key);
	memcpy(end(map), val, map->s_values);
	map->size += 1;
}

void	set(t_map *map, void *key, void *val)
{

	if (map->size == map->capacity)
		remap(map);
	map->keys[map->size].s_key = sizeof(*key);
	map->hash_table[map->size] = hash(key, map->keys[map->size].s_key);
	map->keys[map->size].key = memdup(key, map->keys[map->size].s_key);
	memcpy(end(map), val, map->s_values);
	map->size += 1;
}
