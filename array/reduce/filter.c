/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:25:07 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 00:31:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	filter(t_arr *arr, int (*condition)())
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (condition(get(arr, i).voidp) != 1)
			remove_at(arr, i--);
}

t_arr	partition(t_arr *arr, int (*condition)())
{
	size_t	i;
	t_arr	res;

	res = array(1, arr->s_arr);
	i = -1;
	while (++i < arr->size)
	{
		if (condition(get(arr, i).voidp) != 1)
		{
			pushv(&res, get(arr, i).voidp);
			remove_at(arr, i--);
		}
	}
	return (res);
}
