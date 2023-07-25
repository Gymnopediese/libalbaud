/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrealloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:12:46 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:19:21 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

void	arrealloc(t_arr	*res, ssize_t size)
{
	char	*temp;
	size_t	i;

	if (res->size + size < res->capacity)
		return ;
	res->capacity *= 2;
	temp = res->arr;
	res->arr = new(res->capacity + 1, res->s_arr);
	i = -1;
	while (++i < res->s_arr * res->size)
		res->arr[i] = temp[i];
	delete(temp);
	arrealloc(res, size);
}
