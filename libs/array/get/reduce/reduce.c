/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:46:29 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 15:53:42 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reduce.h"

ssize_t	llreduce(t_arr *arr, void (*f)(), ...)
{
	ssize_t	res;
	size_t	i;
	va_list	l;

	va_start(l, f);
	res = 0;
	i = -1;
	while (++i < arr->size)
		f(get(arr, i), &res, l, i, arr);
	return (res);
}

double	dreduce(t_arr *arr, void (*f)(), ...)
{
	double	res;
	size_t	i;
	va_list	l;

	va_start(l, f);
	res = 0;
	i = -1;
	while (++i < arr->size)
		f(get(arr, i), &res, l, i, arr);
	return (res);
}

t_arr	areduce(t_arr *arr, void (*f)(), ...)
{
	t_arr	res;
	size_t	i;
	va_list	l;

	va_start(l, f);
	res = array(1, arr->elem_size);
	i = -1;
	while (++i < arr->size)
		f(get(arr, i), &res, l, i, arr);
	return (res);
}
