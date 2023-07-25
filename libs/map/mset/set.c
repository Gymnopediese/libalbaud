/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:17:15 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 13:02:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mset.h"

void	mset(t_map *map, t_elem key, t_elem value)
{
	t_pair	pair;
	ssize_t	index;

	index = 0;
	pair.key.len = key.len;
	pair.key.arr = memdup(key.chars, pair.key.len);
	pair.value.len = value.len;
	pair.value.arr = memdup(value.chars, pair.value.len);
	hash(pair.key.arr, pair.key.len, pair.hash);
	index = findexof(map, has_hash, pair.hash);
	if (index == -1)
		append(map, v(&pair));
	else
		replace_at(map, index, v(&pair));
}
