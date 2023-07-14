/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 01:50:07 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:13:46 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	unique(t_arr *arr)
{
	size_t	i;

	i = -1;
	while (++i < arr->size - 1)
	{
		if (containsvfrom(arr, i + 1, get(arr, i), 1))
			remove_at(arr, i--);
	}
}

void	uniquen(t_arr *arr, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < arr->size - 1)
	{
		if (countvfrom(arr, i + 1, get(arr, i), 1) >= n)
			remove_at(arr, i--);
	}
}
