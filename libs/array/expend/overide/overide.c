/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overide.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:51:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:25:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "overide.h"

void	overide(t_arr *arr, size_t index, t_elem elem)
{
	inrange(arr, &index);
	arrealloc(arr, index - arr->size + elem.len);
	memcpy(getr(arr, index).voidp, elem.chars, arr->s_arr * elem.len);
}
