/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:32:58 by albaud            #+#    #+#             */
/*   Updated: 2023/06/30 17:26:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int	main(void)
{
	t_map			mapp;
	double			a = 123;
	double			*res;

	printf("adsf\n");
	mapp = map(10, 8);
	printf("adsf\n");
	setstr(&mapp, "salut", (void *)&a);
	a = 666;
	setstr(&mapp, "koko banan for ever my dudy boy", (void *)&a);
	res = getstr(&mapp, "salut");
	printf("%f\n", *res);
	res = getstr(&mapp, "koko banan for ever my dudy boy");
	printf("%f\n", *res);
	printf("%s\n", (char *)getk(&mapp, 0));
	printf("%s\n", (char *)getk(&mapp, 1));
}
