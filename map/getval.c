/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getval.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:03:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 12:42:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*getkey(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index))->key);
}

void	*getvalue(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index))->value);
}

void	*gethash(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index))->hash);
}

size_t	getkeysize(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index))->s_key);
}

size_t	getvaluesize(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index))->s_value);
}

