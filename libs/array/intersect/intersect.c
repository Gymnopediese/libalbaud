/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:14:28 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:47:41 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intersect.h"

t_arr	intersect(t_arr *a, t_arr *b, int (*opp)(int, int))
{
	t_arr	res;
	size_t	i;

	res = array(1, a->s_arr);
	i = -1;
	while (++i < a->size)
	{
		if (opp(1, indexof(a, gete(b, i)) != (size_t) - 1))
			append(&res, gete(a, i));
	}
	i = -1;
	while (++i < b->size)
	{
		if (opp(1, indexof(a, gete(b, i)) != (size_t) - 1))
			append(&res, gete(b, i));
	}
	unique(&res);
	clear_excess(&res);
	return (res);
}

t_arr	intersectf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int))
{
	t_arr	res;
	size_t	i;

	res = array(1, a->s_arr);
	i = -1;
	while (++i < a->size)
	{
		if (opp(1, findexof(a, f) != (size_t) - 1))
			append(&res, gete(a, i));
	}
	i = -1;
	while (++i < b->size)
	{
		if (opp(1, findexof(a, f) != (size_t) - 1))
			append(&res, gete(b, i));
	}
	unique(&res);
	clear_excess(&res);
	return (res);
}

int	has_intersection(t_arr *a, t_arr *b, int (*opp)(int, int))
{
	size_t	i;

	i = -1;
	while (++i < a->size)
	{
		if (opp(1, indexof(a, gete(b, i)) != (size_t) - 1))
			return (1);
	}
	i = -1;
	while (++i < b->size)
	{
		if (opp(1, indexof(a, gete(b, i)) != (size_t) - 1))
			return (1);
	}
	return (0);
}

int	has_intersectionf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int))
{
	size_t	i;

	i = -1;
	while (++i < a->size)
	{
		if (opp(1, findexof(a, f) != (size_t) - 1))
			return (1);
	}
	i = -1;
	while (++i < b->size)
	{
		if (opp(1, findexof(a, f) != (size_t) - 1))
			return (1);
	}
	return (0);
}
