/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:00:27 by albaud            #+#    #+#             */
/*   Updated: 2023/08/04 13:08:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remove.h"

void	erasen(t_arr *arr, size_t n, t_elem elem)
{
	size_t	i;

	i = indexfrom(arr, 0, elem);
	while (i != (size_t)-1 && n--)
	{
		nremove_at(arr, i, elem.len);
		i = indexfrom(arr, i - (i != 0), elem);
	}
}
