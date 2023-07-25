/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pople.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:09:50 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 12:45:21 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pop.h"

void	*pople(t_arr *arr, size_t ind, size_t len)
{
	void	*res;

	inrange(arr, &ind);
	res = memdup(getr(arr, ind).voidp, arr->s_arr * len);
	nremove_at(arr, ind, len);
	return (res);
}

void	*poplefront(t_arr *arr, size_t len)
{
	return (pople(arr, 0, len));
}

void	*popleback(t_arr *arr, size_t len)
{
	return (pople(arr, -1, len));
}
