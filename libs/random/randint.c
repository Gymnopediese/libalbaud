/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:22:42 by albaud            #+#    #+#             */
/*   Updated: 2023/07/16 21:42:48 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "random.h"

void	init(void)
{
	time_t		t;
	static int	innit = 1;

	if (innit)
	{
		innit = 0;
		srand((unsigned) time(&t));
	}
}

long long	randint(long long min, long long max)
{
	init();
	if (min >= max)
		error("invalid parameter for function ft_randint()\
: min should be less than max");
	return (rand() % (max - min) + min);
}

double	randdouble(double min, double max)
{
	return (randint(min * 1000000, max * 1000000) / 1000000.0);
}
