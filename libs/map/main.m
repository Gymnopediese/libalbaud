/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.m                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:32:58 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:37:38 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int	main(void)
{
	t_map			mapp;
	double			*res;

	mapp = newmap(10);
	infos(&mapp);
	setstrk(&mapp, "salut", 8, 124.124);
	setstrk(&mapp, "koko banana for ever my dudy boy", 8, 666.0);
	res = getstr(&mapp, "salut");
	printf("RESULT %f\n", *res);
	res = getstr(&mapp, "koko banana for ever my dudy boy");
	printf("RESULT %f\n", *res);
	infos(&mapp);
	setstrk(&mapp, "salut", 8, 42.42);
	res = getstr(&mapp, "salut");
	printf("RESULT %f\n", *res);
	infos(&mapp);
	remove_keystr(&mapp, "salut");
	res = getstr(&mapp, "salut");
	if (res != 0)
		printf("RESULT %f\n", *res);
	else
		printf("nothing funct\n");
	infos(&mapp);

	t_arr	a = arrayn(4, 4, 111, 222, 333, 444);
	t_arr	b = arrayn(4, 8, 12.32, 123.33, 3333.3, 4.44);

	mapp = to_map(&a, &b);

	res = getlen(&mapp, 4, 111);
	printf("RESULT %f\n", *res);
	res = getlen(&mapp, 4, 222);
	printf("RESULT %f\n", *res);
	res = getlen(&mapp, 4, 333);
	printf("RESULT %f\n", *res);
	res = getlen(&mapp, 4, 444);
	printf("RESULT %f\n", *res);


	a = arrayn(4, 8, "1", "2", "3", "4");

	mapp = to_map_kp(&a, &b);

	infos(&mapp);
	res = getstr(&mapp, "1");
	printf("RESULT %f\n", *res);
	res = getstr(&mapp, "2");
	printf("RESULT %f\n", *res);
	res = getstr(&mapp, "3");
	printf("RESULT %f\n", *res);
	res = getstr(&mapp, "4");
	printf("RESULT %f\n", *res);
	infos(&mapp);
}
