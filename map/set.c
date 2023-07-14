/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:17:15 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 13:38:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	hash(char *o, size_t size, char *res)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (++i < size)
	{
		if (++j >= HASH_SIZE)
			j = 0;
		res[j] = o[i] ^ '#';
		res[j] = res[j] ^ 'h';
		res[j] = res[j] ^ 'a';
		res[j] = res[j] ^ 's';
		res[j] = res[j] ^ 'h';
	}
	while (i < HASH_SIZE && ++j < HASH_SIZE)
		res[j] = 0;
}

void	setstrk(t_map *map, void *key, ...)
{
	va_list	l;
	char	*val;
	size_t	s_value;

	va_start(l, key);
	s_value = va_arg(l, size_t);
	val = va_arg_len(&l, s_value);
	setvlen(map, key, strlen(key), val, s_value);
}

void	setlen(t_map *map, ...)
{
	t_pair	pair;
	va_list	l;
	size_t	index;

	va_start(l, map);
	pair.s_key = va_arg(l, size_t);
	pair.key = memdup(va_arg_len(&l, pair.s_key), pair.s_key);
	pair.s_value = va_arg(l, size_t);
	pair.value = memdup(va_arg_len(&l, pair.s_value), pair.s_value);
	hash(pair.key, pair.s_key, pair.hash);
	index = indexofff(map, pair.hash, has_hash);
	if (index == (size_t)-1)
		pushv(map, (char *)&pair);
	else
		replace_atv(map, index, (char *)&pair);
}
