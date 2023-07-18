/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:02:15 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 00:18:00 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_arr	arrayn(size_t ammount, size_t size, ...)
{
	va_list			list;
	size_t			i;
	size_t			j;
	t_arr			res;
	char			*p;

	res.s_arr = size;
	va_start(list, size);
	res.size = ammount;
	res.capacity = ammount;
	if (ammount == 0)
		res.capacity = 1;
	res.arr = new(ammount + 1, res.s_arr);
	i = -1;
	while (++i < ammount)
	{
		j = size;
		p = 0;
		p = va_arg_len(&list, size);
		j = -1;
		while (++j < res.s_arr)
			res.arr[i * res.s_arr + j] = p[j];
	}
	va_end(list);
	return (res);
}

t_arr	array(size_t ammount, size_t size)
{
	t_arr	res;

	res.s_arr = size;
	res.size = 0;
	res.capacity = ammount;
	if (ammount == 0)
		res.capacity = 1;
	res.arr = new(ammount + 1, size);
	return (res);
}

t_arr	arrayv(size_t ammount, size_t size, char *c)
{
	t_arr	res;

	res.s_arr = size;
	res.size = ammount;
	res.capacity = ammount;
	if (ammount == 0)
		res.capacity = 1;
	res.arr = new(ammount + 1, size);
	memcpy(res.arr, c, ammount * size);
	return (res);
}

void	arrealloc(t_arr	*res, size_t size)
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

t_arr	copy(t_arr	*res)
{
	t_arr	cpy;
	size_t	i;

	cpy.capacity = res->capacity;
	cpy.size = res->size;
	cpy.s_arr = res->s_arr;
	cpy.arr = new(cpy.capacity, cpy.s_arr);
	i = -1;
	while (++i < cpy.s_arr * cpy.size)
		cpy.arr[i] = res->arr[i];
	return (cpy);
}

