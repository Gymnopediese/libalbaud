/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:38:33 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:39:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	are_all(t_arr *arr, int (*func)())
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (func(getr(arr, i).voidp) == 0)
			return (0);
	return (1);
}

int	are_not(t_arr *arr, int (*func)())
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (func(getr(arr, i).voidp) == 1)
			return (0);
	return (1);
}

int	is_n(t_arr *arr, size_t n, int (*func)())
{
	size_t	i;
	size_t	c;

	i = -1;
	c = 0;
	while (++i < arr->size)
		if (func(getr(arr, i).voidp) == 0)
			c++;
	return (c >= n);
}

int	is_only_n(t_arr *arr, size_t n, int (*func)())
{
	size_t	i;
	size_t	c;

	i = -1;
	c = 0;
	while (++i < arr->size)
		if (func(getr(arr, i).voidp) == 0)
			c++;
	return (c < n);
}

int	is_any(t_arr *arr, int (*func)())
{
	size_t	i;

	i = -1;
	while (++i < arr->size)
		if (func(getr(arr, i).voidp) == 1)
			return (1);
	return (0);
}
