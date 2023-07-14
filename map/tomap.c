/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tomap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:06:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:39:29 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	to_map(t_arr *keys, t_arr *values)
{
	t_map	res;
	size_t	i;

	if (keys->size != values->size)
		error("invalid keys values to make a map");
	res = newmap(keys->size);
	i = -1;
	while (++i < keys->size)
		setvlen(&res, get(keys, i), keys->s_arr, get(values, i), values->s_arr);
	return (res);
}

t_map	to_map_kp(t_arr *keys, t_arr *values)
{
	t_map	res;
	size_t	i;
	char	*p;

	if (keys->size != values->size)
		error("invalid keys values to make a map");
	res = newmap(keys->size);
	i = -1;
	while (++i < keys->size)
	{
		p = *(char **)get(keys, i);
		printf("iterations %s\n", p);
		infos(&res);
		setvlen(&res, p, strlen(p), get(values, i), values->s_arr);
	}
	return (res);
}

t_map	to_map_vp(t_arr *keys, t_arr *values)
{
	t_map	res;
	size_t	i;
	char	*p;

	if (keys->size != values->size)
		error("invalid keys values to make a map");
	res = newmap(keys->size);
	i = -1;
	while (++i < keys->size)
	{
		p = *(char **)get(values, i);
		setvlen(&res, get(keys, i), keys->s_arr, p, strlen(p));
	}
	return (res);
}

t_map	to_map_pp(t_arr *keys, t_arr *values)
{
	t_map	res;
	size_t	i;
	char	*k;
	char	*v;

	if (keys->size != values->size)
		error("invalid keys values to make a map");
	res = newmap(keys->size);
	i = -1;
	while (++i < keys->size)
	{
		k = *(char **)get(keys, i);
		v = *(char **)get(values, i);
		setvlen(&res, k, strlen(k), v, strlen(v));
	}
	return (res);
}
