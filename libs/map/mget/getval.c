/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getval.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:03:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:14:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mget.h"

t_pointer	getkey(t_map *map, size_t index)
{
	return (((getr(map, index).pairs)->key.me));
}

t_pointer	getvalue(t_map *map, size_t index)
{
	return (((getr(map, index).pairs)->value.me));
}

char	*gethash(t_map *map, size_t index)
{
	return (((getr(map, index).pairs)->hash));
}

size_t	getkeysize(t_map *map, size_t index)
{
	return (((getr(map, index).pairs)->key.len));
}

size_t	getvaluesize(t_map *map, size_t index)
{
	return (((getr(map, index).pairs)->value.len));
}

