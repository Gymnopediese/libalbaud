/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:14:28 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:18:39 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../array.h"


t_arr	intersect(t_arr *a, t_arr *b, int (*opp)(int, int))
{
	t_arr	res;
	size_t	i;
	int		c;

	res = array(1, a->s_arr);
	i = -1;
	while (++i < a->size)
	{
		c = containsv(b, get(a, i), 1);
		if (opp(1, c))
			pushv(&res, get(a, i));
	}
	i = -1;
	while (++i < b->size)
	{
		c = containsv(a, get(b, i), 1);
		if (opp(1, c))
			pushv(&res, get(b, i));
	}
	unique(&res);
	clear_excess(&res);
	return (res);
}

t_arr	intersectf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int))
{
	t_arr	res;
	size_t	i;
	int		c;

	res = array(1, a->s_arr);
	i = -1;
	while (++i < a->size)
	{
		c = containsf(b, f);
		if (opp(1, c))
			pushv(&res, get(a, i));
	}
	i = -1;
	while (++i < b->size)
	{
		c = containsf(a, f);
		if (opp(1, c))
			pushv(&res, get(b, i));
	}
	unique(&res);
	clear_excess(&res);
	return (res);
}

int	has_intersection(t_arr *a, t_arr *b, int (*opp)(int, int))
{
	size_t	i;
	int		c;

	i = -1;
	while (++i < a->size)
	{
		c = containsv(b, get(a, i), 1);
		if (opp(1, c))
			return (1);
	}
	i = -1;
	while (++i < b->size)
	{
		c = containsv(a, get(b, i), 1);
		if (opp(1, c))
			return (1);
	}
	return (0);
}

int	has_intersectionf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int))
{
	size_t	i;
	int		c;

	i = -1;
	while (++i < a->size)
	{
		c = containsf(b, f);
		if (opp(1, c))
			return (1);
	}
	i = -1;
	while (++i < b->size)
	{
		c = containsf(a, f);
		if (opp(1, c))
			return (1);
	}
	return (0);
}
