/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primerange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:59:44 by albaud            #+#    #+#             */
/*   Updated: 2023/07/30 20:19:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "range.h"

int	isprime(int i)
{
	int	j;

	j = 1;
	while (++j <= i * i)
		if (i % j == 0)
			return (0);
	return (1);
}

t_arr	primerange(int len)
{
	t_arr	arr;
	int		i;

	arr = array(len, sizeof(int));
	i = 1;
	while (++i < len)
	{
		if (isprime(i))
			append(&arr, v(&i));
	}
	return (arr);
}
