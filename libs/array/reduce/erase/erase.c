/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:54:01 by albaud            #+#    #+#             */
/*   Updated: 2023/08/04 13:48:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "erase.h"

int	erase(t_arr *arr, t_elem elem)
{
	size_t	i;

	i = indexof(arr, elem);
	if (i != (size_t)-1)
	{
		nremove_at(arr, i, elem.len);
		return (i);
	}
	return (-1);
}
