/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 04:28:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find.h"

void	*findf(t_arr *arr, int (*condition)(void *))
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
	{
		if (condition(get(arr, i)) == 1)
			return (get(arr, i));
	}
	return (0);
}

void	*findffrom(t_arr *arr, size_t s, int (*condition)(void *))
{
	size_t	i;

	inrange(arr, &s);
	i = s - 1;
	while (++i < arr->size)
	{
		if (condition(get(arr, i)) == 1)
			return (get(arr, i));
	}
	return (0);
}

void	*findfto(t_arr *arr, size_t e, int (*condition)(void *))
{
	size_t	i;

	inrange(arr, &e);
	i = -1;
	while (++i < e)
	{
		if (condition(get(arr, i)) == 1)
			return (get(arr, i));
	}
	return (0);
}

void	*findfin(t_arr *arr, size_t s, size_t e, int (*condition)(void *))
{
	size_t	i;

	minmax(arr, &s, &e);
	i = s - 1;
	while (++i < e)
	{
		if (condition(get(arr, i)) == 1)
			return (get(arr, i));
	}
	return (0);
}
