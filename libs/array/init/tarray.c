/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tarray.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:53:42 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:23:54 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_arr	*tarray(size_t elme_size, t_elem e)
{
	static t_arr	res[10];
	static int		roulette = 0;

	roulette = (roulette + 1) % 10;
	res[roulette].len = e.len;
	res[roulette].capacity = e.len;
	res[roulette].elem_size = elme_size;
	res[roulette].arr = memdup(e.arr, e.len * elme_size);
	return (&res[roulette]);
}

t_arr	*tarrays(char *str)
{
	return (tarray(1, s(str)));
}

t_arr	*torray(size_t elme_size, t_elem e)
{
	static t_arr	res[10];
	static int		roulette = 0;

	roulette = (roulette + 1) % 10;
	res[roulette].len = e.len;
	res[roulette].capacity = e.len;
	res[roulette].elem_size = elme_size;
	res[roulette].arr = e.arr;
	return (&res[roulette]);
}

t_arr	*torrays(char *str)
{
	return (tarray(1, s(str)));
}
