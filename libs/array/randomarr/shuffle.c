/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shuffle.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:13:05 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 17:11:56 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomarr.h"

void	shuffle(t_arr *arr)
{
	size_t	i;
	size_t	j;

	i = arr->size;
	while (i > 1)
	{
		j = randint(0, i - 1);
		i--;
		swap(arr, i, j);
	}
}
