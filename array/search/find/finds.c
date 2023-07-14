/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finds.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:05:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find.h"

void	*finds(t_arr *arr, char *target)
{
	return (findsin(arr, 0, -1, target));
}

void	*findsfrom(t_arr *arr, size_t s, char *target)
{
	return (findsin(arr, s, -1, target));
}

void	*findsto(t_arr *arr, size_t e, char *target)
{
	return (findsin(arr, 0, e, target));
}

void	*findsin(t_arr *arr, size_t s, size_t e, char *target)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = strlen(target);
	minmax(arr, &s, &e);
	i = s - 1;
	while (++i < e)
	{
		j = 0;
		while (memcmpn(get(arr, i + j),
				&target[j * arr->s_arr], arr->s_arr) == 1)
			j++;
		if (j == size)
			return (get(arr, i));
	}
	return (0);
}
