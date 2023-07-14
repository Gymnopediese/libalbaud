/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:33:27 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 20:52:47 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	swap(t_arr *arr, size_t a, size_t b)
{
	char	*l;
	char	*r;
	char	t;
	size_t	i;

	r = get(arr, a);
	l = get(arr, b);
	i = -1;
	while (++i < arr->s_arr)
	{
		t = *r;
		*(r++) = *l;
		*(l++) = t;
	}
}

void	swap_any(t_arr *arr, size_t a, size_t b)
{
	char	*l;
	char	*r;
	char	t;
	size_t	i;

	r = get_any(arr, a);
	l = get_any(arr, b);
	i = -1;
	while (++i < arr->s_arr)
	{
		t = *r;
		*(r++) = *l;
		*(l++) = t;
	}
}


void	reverse(t_arr *arr)
{
	size_t	i;

	i = -1;
	while (++i < arr->size / 2)
	{
		swap(arr, i, arr->size - i - 1);
	}
}
