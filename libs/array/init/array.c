/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:06:47 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:16:36 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_arr	array(size_t len, size_t elem_size)
{
	t_arr	res;

	res.elem_size = elem_size;
	res.len = 0;
	res.capacity = len;
	assert((ssize_t) len < 0, "invalid array length");
	if (len == 0)
		res.capacity = 1;
	res.arr = new(res.capacity + 1, elem_size);
	return (res);
}
