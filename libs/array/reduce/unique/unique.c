/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 01:50:07 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 12:53:10 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unique.h"

void	unique(t_arr *arr)
{
	size_t	i;

	i = -1;
	while (++i < arr->size - 1)
	{
		if (countfrom(arr, i + 1, gete(arr, i)) != 0)
			remove_at(arr, i--);
	}
}

void	uniquen(t_arr *arr, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < arr->size - 1)
	{
		if (countfrom(arr, i + 1, gete(arr, i)) >= n)
			remove_at(arr, i--);
	}
}
