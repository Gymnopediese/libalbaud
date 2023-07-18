/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containsp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 00:31:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contains.h"

int	containsp(t_arr *arr, void *target)
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (get(arr, i).voidp == target)
			return (1);
	return (0);
}

int	containspfrom(t_arr *arr, size_t s, void *target)
{
	size_t	i;

	inrange(arr, &s);
	i = s - 1;
	while (++i < arr->size)
		if (get(arr, i).voidp == target)
			return (1);
	return (0);
}

int	containspto(t_arr *arr, size_t e, void *target)
{
	size_t	i;

	inrange(arr, &e);
	i = -1;
	while (++i < e)
		if (get(arr, i).voidp == target)
			return (1);
	return (0);
}

int	containspin(t_arr *arr, size_t s, size_t e, void *target)
{
	size_t	i;

	minmax(arr, &s, &e);
	i = s - 1;
	while (++i < e)
		if (get(arr, i).voidp == target)
			return (1);
	return (0);
}
