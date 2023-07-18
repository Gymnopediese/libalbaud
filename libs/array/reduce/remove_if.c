/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_if.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 02:06:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 12:54:11 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reduce.h"

int	remove_if(t_arr *arr, int (*condition)())
{
	size_t	index;

	index = indexoff(arr, condition);
	if (index == (size_t)-1)
		return (0);
	remove_at(arr, index);
	return (1);
}

int	remove_iff(t_arr *arr, void *cmp, int (*condition)())
{
	size_t	index;

	index = indexofff(arr, cmp, condition);
	if (index == (size_t)-1)
		return (0);
	remove_at(arr, index);
	return (1);
}

void	remove_ifn(t_arr *arr, size_t n, int (*condition)())
{
	while (n-- && remove_if(arr, condition))
		;
}

void	remove_iffn(t_arr *arr, size_t n, void *cmp, int (*condition)())
{
	while (n-- && remove_iff(arr, cmp, condition))
		;
}
