/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:45:29 by albaud            #+#    #+#             */
/*   Updated: 2023/10/23 17:43:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

void	inrange(t_arr *arr, size_t *index)
{
	*index = arr->size * ((ssize_t)(*index) < 0) + *index;
	if ((ssize_t)(*index) < 0)
		error("index out of range: too low");
	if (*index >= arr->size)
		error("index out of range: too hight");
}

void	inrangelen(t_arr *arr, size_t *index)
{
	*index = arr->size * ((ssize_t)(*index) < 0) + *index;
	if ((ssize_t)(*index) < 0)
		error("index out of range: too low");
	if (*index > arr->size)
		error("index out of range: too hight");
}

void	incapacity(t_arr *arr, size_t *index)
{
	*index = arr->capacity * ((ssize_t)(*index) < 0) + *index;
	if ((ssize_t)(*index) < 0)
		error("index out of capacity: too low");
	if (*index >= arr->capacity)
		error("index out of capacity: too hight");
}

void	minmax(t_arr *arr, size_t *start, size_t *end)
{
	inrange(arr, start);
	inrange(arr, end);
	if (*start > *end)
		error("invalid range: min cannot be grater or equal to max");
}

void	minmaxlen(t_arr *arr, size_t *start, size_t *end)
{
	inrangelen(arr, start);
	inrangelen(arr, end);
	if (*start > *end)
		error("invalid range: min cannot be grater or equal to max");
}
