/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tomap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:06:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 02:27:23 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "to_map.h"

t_map	to_map(t_arr *keys, t_arr *values)
{
	t_map	res;
	size_t	i;

	if (keys->size != values->size)
		error("invalid keys values to make a map");
	res = newmap(keys->size);
	i = -1;
	while (++i < keys->size)
		mset(&res, gete(keys, i), gete(values, i));
	return (res);
}

// t_map	to_map_kp(t_arr *keys, t_arr *values)
// {
// 	t_map	res;
// 	size_t	i;
// 	char	*p;

// 	if (keys->size != values->size)
// 		error("invalid keys values to make a map");
// 	res = newmap(keys->size);
// 	i = -1;
// 	while (++i < keys->size)
// 	{
// 		p = *getr(keys, i).strings_char;
// 		printf("iterations %s\n", p);
// 		infos(&res);
// 		setvlen(&res, p, strlen(p), getr(values, i).voidp, values->s_arr);
// 	}
// 	return (res);
// }

// t_map	to_map_vp(t_arr *keys, t_arr *values)
// {
// 	t_map	res;
// 	size_t	i;
// 	char	*p;

// 	if (keys->size != values->size)
// 		error("invalid keys values to make a map");
// 	res = newmap(keys->size);
// 	i = -1;
// 	while (++i < keys->size)
// 	{
// 		p = *getr(values, i).strings_char;
// 		setvlen(&res, getr(keys, i).voidp, keys->s_arr, p, strlen(p));
// 	}
// 	return (res);
// }

// t_map	to_map_pp(t_arr *keys, t_arr *values)
// {
// 	t_map	res;
// 	size_t	i;
// 	char	*k;
// 	char	*v;

// 	if (keys->size != values->size)
// 		error("invalid keys values to make a map");
// 	res = newmap(keys->size);
// 	i = -1;
// 	while (++i < keys->size)
// 	{
// 		k = *(char **)getr(keys, i).strings_char;
// 		v = *(char **)getr(values, i).strings_char;
// 		set(&res, s(k), s(v));
// 	}
// 	return (res);
// }
