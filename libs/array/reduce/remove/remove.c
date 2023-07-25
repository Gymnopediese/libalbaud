/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:00:27 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 12:51:34 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remove.h"

size_t	erasen(t_arr *arr, size_t ammount, t_elem elem)
{
	size_t	i;

	i = -1;
	while (++i < ammount)
		ammount *= erase(arr, elem);
	return (i);
}
