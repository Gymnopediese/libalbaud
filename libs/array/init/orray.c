/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orray.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:53:42 by albaud            #+#    #+#             */
/*   Updated: 2023/07/20 16:55:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_arr	l_orray(size_t elme_size, void *e, size_t len)
{
	t_arr	res;

	res.len = len;
	res.capacity = len;
	res.elem_size = elme_size;
	res.voidp = e;
	return (res);
}

t_arr	s_orray(char *str)
{
	return (l_orray(1, str, strlen(str)));
}
