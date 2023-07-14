/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_on.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:14:34 by albaud            #+#    #+#             */
/*   Updated: 2023/07/07 20:43:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	insert_on_at(t_arr *arr, size_t index, size_t rlen, t_arr *ins)
{
	insert_on_atv(arr, index, rlen, ins->arr, ins->size);
}

void	insert_on_ats(t_arr *arr, size_t index, size_t rlen, char *ins)
{
	insert_on_atv(arr, index, rlen, ins, strlen(ins));
}

void	insert_on_atv(t_arr *arr, size_t index, size_t rlen,
	char *elem, size_t len)
{

	while (rlen-- && arr->size - index)
		remove_at(arr, index);
	insertv(arr, index, elem, len);
}

void	insert_on(t_arr *arr, char *elem, t_arr *ins)
{
	insert_onv(arr, elem, ins->arr, ins->size);
}

void	insert_onv(t_arr *arr, char *tofind, char *elem, size_t len)
{
	size_t	index;

	index = indexofv(arr, tofind, len);
	if (index == (size_t)-1)
		return ;
	insert_on_atv(arr, index, 1, elem, len);
}
