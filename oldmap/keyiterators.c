/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyiterators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:23:13 by albaud            #+#    #+#             */
/*   Updated: 2023/06/30 17:23:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*begink(t_map *arr)
{
	return (arr->keys->key);
}

void	*endk(t_map *arr)
{
	return (arr->keys[arr->size].key);
}

const void	*cbegink(t_map *arr)
{
	return (arr->keys->key);
}

const void	*cendk(t_map *arr)
{
	return (arr->keys[arr->size].key);
}

void	*getk(t_map *arr, size_t index)
{
	if (index > arr->size)
		return (0);
	return (arr->keys[index].key);
}
