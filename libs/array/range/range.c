/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:16:51 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:47:03 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_arr	rangei(int a, int b)
{
	t_arr	res;
	size_t	i;

	assert(a > b, "invalid range");
	res = array(b - a, sizeof(int));
	i = -1;
	while (++i < res.capacity)
		res.ints[i] = a + i;
	res.size = res.capacity;
	return (res);
}

t_arr	rangeli(long int a, long int b)
{
	t_arr	res;
	size_t	i;

	assert(a > b, "invalid range");
	res = array(b - a, sizeof(long));
	i = -1;
	while (++i < res.capacity)
		res.longs[i] = a + i;
	res.size = res.capacity;
	return (res);
}

t_arr	rangelli(long long a, long long b)
{
	t_arr	res;
	size_t	i;

	assert(a > b, "invalid range");
	res = array(b - a, sizeof(long long));
	i = -1;
	while (++i < res.capacity)
		res.longs[i] = a + i;
	res.size = res.capacity;
	return (res);
}

t_arr	ranged(long a, long b)
{
	t_arr	res;
	size_t	i;

	assert(a > b, "invalid range");
	res = array(b - a, sizeof(double));
	i = -1;
	while (++i < res.capacity)
		res.doubles[i] = a + i;
	res.size = res.capacity;
	return (res);
}

t_arr	rangef(long a, long b)
{
	t_arr	res;
	size_t	i;

	assert(a > b, "invalid range");
	res = array(b - a, sizeof(float));
	i = -1;
	while (++i < res.capacity)
		res.floats[i] = a + i;
	res.size = res.capacity;
	return (res);
}
