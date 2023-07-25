/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itod.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:41:13 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:23:56 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

t_str	itod(double nb, size_t p)
{
	t_str	res;
	size_t	i;

	i = -1;
	while (++i < p)
		nb *= 10;
	res = itoa(nb);
	if (p == 0)
		return (res);
	if (nb == 0)
	{
		append(&res, v(":"));
		fillback(&res, p, v("0"));
		return (res);
	}
	insert(&res, -p, v("."));
	return (res);
}

t_str	itod6(double nb)
{
	return (itod(nb, 6));
}
