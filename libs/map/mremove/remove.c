/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:55:38 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 02:14:22 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mremove.h"

int	removekey(t_map *map, t_elem key)
{
	char	h[HASH_SIZE];

	hash(key.arr, key.len, h);
	return (remove_if(map, has_hash, h));
}
