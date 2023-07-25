/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   center.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:43:53 by albaud            #+#    #+#             */
/*   Updated: 2023/07/19 15:58:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "center.h"

void	center(t_arr *arr, size_t fsize, t_elem elem)
{
	if (fsize <= arr->size)
		return ;
	fillback(arr, fsize - (fsize - arr->size) / 2, elem);
	fillfront(arr, fsize, elem);
}
