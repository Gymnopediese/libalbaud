/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_if.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 02:06:16 by albaud            #+#    #+#             */
/*   Updated: 2023/09/26 10:19:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remove_if.h"

typedef void	(*t_void)();

int	remove_if(t_arr *arr, int (*condition)(), ...)
{
	size_t	i;
	size_t	end;
	va_list	l;

	va_start(l, condition);
	i = -1;
	end = arr->size;
	while (++i < end)
		end *= (condition(get(arr, i), l, i, arr) == 0);
	(t_void []){if_not, remove_at}
		[condition(get(arr, i), l, i, arr) == 0](arr, i);
	return (i != end);
}

void	nremove_if(t_arr *arr, size_t n, int (*condition)(), ...)
{
	size_t	i;
	va_list	l;

	va_start(l, condition);
	i = -1;
	while (++i < arr->size && n--)
	{
		if ((condition(get(arr, i).arr, l, i, arr) == 0) == 0)
			remove_at(arr, i--);
	}
}
