/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expandtabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:58:03 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 13:22:09 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod.h"

void	expendtabsn(t_arr *arr, size_t n)
{
	ssize_t	ind;

	ind = indexof(arr, v("\t"));
	while (ind != -1)
	{
		remove_at(arr, ind);
		fill(arr, ind, arr->size + n - (ind % n), v(" "));
		ind = indexfrom(arr, ind + 1, v("\t"));
	}
}

void	expendtabs(t_arr *arr)
{
	expendtabsn(arr, 4);
}
