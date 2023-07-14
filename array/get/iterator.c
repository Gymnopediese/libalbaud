/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:00:13 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 20:53:05 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	*begin(t_arr *arr)
{
	return (arr->arr);
}

void	*end(t_arr *arr)
{
	return (&arr->arr[arr->size * arr->s_arr]);
}

const void	*cbegin(t_arr *arr)
{
	return (arr->arr);
}

const void	*cend(t_arr *arr)
{
	return (&arr->arr[arr->size * arr->s_arr]);
}

void	*get(t_arr *arr, size_t index)
{
	inrange(arr, &index);
	return (&arr->arr[index * arr->s_arr]);
}

void	*get_any(t_arr *arr, size_t index)
{
	incapacity(arr, &index);
	return (&arr->arr[index * arr->s_arr]);
}
