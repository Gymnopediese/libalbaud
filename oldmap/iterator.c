/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:00:13 by albaud            #+#    #+#             */
/*   Updated: 2023/06/30 14:28:59 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*begin(t_map *arr)
{
	return (arr->values);
}

void	*end(t_map *arr)
{
	return (&arr->values[arr->size * arr->s_values]);
}

const void	*cbegin(t_map *arr)
{
	return (arr->values);
}

const void	*cend(t_map *arr)
{
	return (&arr->values[arr->size * arr->s_values]);
}

void	*getv(t_map *arr, size_t index)
{
	if (index > arr->size)
		return (0);
	return (&arr->values[index * arr->s_values]);
}
