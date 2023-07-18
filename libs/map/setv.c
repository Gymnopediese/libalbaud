/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:34:32 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 15:48:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	setvstr(t_map *map, void *key, void *val)
{
	setvlen(map, key, strlen(key), val, strlen(val));
}

void	setvstrv(t_map *map, void *key, size_t s_key, void *val)
{
	setvlen(map, key, s_key, val, strlen(val));
}

void	setvstrk(t_map *map, void *key, void *val, size_t s_value)
{
	setvlen(map, key, strlen(key), val, s_value);
}

int	has_hash(char *hash, t_pair *pair)
{
	return (memcmpn(hash, pair->hash, HASH_SIZE));
}

void	setvlen(t_map *map, void *key, size_t s_key, void *val, size_t s_value)
{
	t_pair	pair;
	size_t	index;

	pair.key = memdup(key, s_key);
	pair.value = memdup(val, s_value);
	pair.s_key = s_key;
	pair.s_value = s_value;
	hash(key, s_key, pair.hash);
	index = indexofff(map, pair.hash, has_hash);
	if (index == (size_t)-1)
		pushv(map, (char *)&pair);
	else
		replace_atv(map, index, (char *)&pair);
}
