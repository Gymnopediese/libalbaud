/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getval.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:03:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:33:08 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*getkey(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index).voidp)->key);
}

void	*getvalue(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index).voidp)->value);
}

void	*gethash(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index).voidp)->hash);
}

size_t	getkeysize(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index).voidp)->s_key);
}

size_t	getvaluesize(t_map *map, size_t index)
{
	return (((t_pair *)get(map, index).voidp)->s_value);
}

