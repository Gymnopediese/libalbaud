/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:47:41 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 15:46:46 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	newmap(size_t capacity)
{
	t_map	m;

	m = array(capacity, sizeof(t_pair));
	return (m);
}

// void	remap(t_map *map)
// {
// 	void	*temp;

// 	map->capacity *= 2;
// 	temp = map->hash_table;
// 	map->hash_table = new(map->capacity + 1, sizeof(t_hash));
// 	memcpy(map->hash_table, temp, sizeof(temp));
// 	temp = map->keys;
// 	map->keys = new(map->capacity + 1, sizeof(t_key));
// 	memcpy(map->hash_table, temp, sizeof(temp));
// 	temp = map->values;
// 	map->values = new(map->capacity + 1, map->s_values);
// 	memcpy(map->values, temp, sizeof(temp));
// }
