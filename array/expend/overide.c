/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overide.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:51:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 20:44:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	overide(t_arr *arr, size_t index, t_arr *over)
{
	overidev(arr, index, over->arr, over->size);
}

void	overidev(t_arr *arr, size_t index, char *elem, size_t len)
{
	inrange(arr, &index);
	arrealloc(arr, index + len); //CACA
	memcpy(get(arr, index), elem, arr->s_arr * len);
}
