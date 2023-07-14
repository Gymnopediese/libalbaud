/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 17:02:38 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:29:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*getvlen(t_map *map, size_t size, void *key)
{
	t_pair	*res;

	res = getpvlen(map, size, key);
	if (res == 0)
		return (0);
	return (res->value);
}

void	*getstr(t_map *map, void *key)
{
	return (getvlen(map, strlen(key), key));
}

void	*getlen(t_map *map, size_t size, ...)
{
	va_list	l;
	char	*key;

	va_start(l, size);
	key = va_arg_len(&l, size);
	return (getvlen(map, size, key));
}

