/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:47:41 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:46:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	map(size_t capacity, size_t s_values)
{
	t_map	m;

	m.capacity = capacity;
	m.hash_table = new(capacity + 1, sizeof(t_hash));
	m.keys = new(capacity + 1, sizeof(t_key));
	m.s_values = s_values;
	m.values = new(capacity + 1, s_values);
	m.size = 0;
	return (m);
}

void	remap(t_map *map)
{
	void	*temp;

	map->capacity *= 2;
	temp = map->hash_table;
	map->hash_table = new(map->capacity + 1, sizeof(t_hash));
	memcpy(map->hash_table, temp, sizeof(temp));
	temp = map->keys;
	map->keys = new(map->capacity + 1, sizeof(t_key));
	memcpy(map->hash_table, temp, sizeof(temp));
	temp = map->values;
	map->values = new(map->capacity + 1, map->s_values);
	memcpy(map->values, temp, sizeof(temp));
}
