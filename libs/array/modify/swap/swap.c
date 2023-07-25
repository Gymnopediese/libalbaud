/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:33:27 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 12:41:09 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	swap(t_arr *arr, size_t a, size_t b)
{
	char	*l;
	char	*r;
	char	t;
	size_t	i;

	r = getr(arr, a).voidp;
	l = getr(arr, b).voidp;
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

	r = get_any(arr, a).voidp;
	l = get_any(arr, b).voidp;
	i = -1;
	while (++i < arr->s_arr)
	{
		t = *r;
		*(r++) = *l;
		*(l++) = t;
	}
}
