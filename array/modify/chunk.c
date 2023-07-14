/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:36:57 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 22:09:34 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "modify.h"

t_arr	chunk(t_arr *arr, size_t size)
{
	t_arr	res;

	if (arr->size <= size)
		return (*arr);
	res = array(arr->size / size, sizeof(t_arr));
	return (res);
}
