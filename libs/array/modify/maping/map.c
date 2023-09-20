/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:31:51 by albaud            #+#    #+#             */
/*   Updated: 2023/07/26 01:17:14 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maping.h"

void	map(t_arr *arr, void (*function)(), ...)
{
	size_t	i;
	va_list	l;

	va_start(l, function);
	i = -1;
	while (++i < arr->size)
		function(getr(arr, i).voidp, l, i, arr);
}

void	mapfrom(t_arr *arr, size_t start, void (*function)(), ...)
{
	size_t	i;
	va_list	l;

	inrangelen(arr, &start);
	va_start(l, function);
	i = start - 1;
	while (++i < arr->size)
		function(getr(arr, i).voidp, l, i, arr);
}

void	mapto(t_arr *arr, size_t end, void (*function)(), ...)
{
	size_t	i;
	va_list	l;


	inrangelen(arr, &end);
	va_start(l, function);
	i = -1;
	while (++i < end)
		function(getr(arr, i).voidp, l, i, arr);
}

void	mapin(t_arr *arr, size_t start, size_t end, void (*function)(), ...)
{
	size_t	i;
	va_list	l;

	va_start(l, function);
	minmaxlen(arr, &start, &end);
	i = start - 1;
	while (++i < end)
		function(getr(arr, i).voidp, l, i, arr);
}

t_arr	nmap(t_arr *arr, size_t elem_size, t_elem (*function)(), ...)
{
	size_t	i;
	va_list	l;
	t_arr	res;

	va_start(l, function);
	res = array(arr->size, elem_size);
	i = -1;
	while (++i < arr->size)
		append(&res, function(getr(arr, i).voidp, l, i, arr));
	return (res);
}
