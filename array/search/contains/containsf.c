/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containsf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 13:17:05 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contains.h"

int	containsf(t_arr *arr, int (*condition)(void *))
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
	{
		if (condition(get(arr, i)) == 1)
			return (1);
	}
	return (0);
}

int	containsffrom(t_arr *arr, size_t s, int (*condition)(void *))
{
	size_t	i;

	inrange(arr, &s);
	i = s - 1;
	while (++i < arr->size)
	{
		if (condition(get(arr, i)) == 1)
			return (1);
	}
	return (0);
}

int	containsfto(t_arr *arr, size_t e, int (*condition)(void *))
{
	size_t	i;

	inrange(arr, &e);
	i = -1;
	while (++i < e)
	{
		if (condition(get(arr, i)) == 1)
			return (1);
	}
	return (0);
}

int	containsfin(t_arr *arr, size_t s, size_t e, int (*condition)(void *))
{
	size_t	i;

	minmax(arr, &s, &e);
	i = s - 1;
	while (++i < e)
	{
		if (condition(get(arr, i)) == 1)
			return (1);
	}
	return (0);
}
