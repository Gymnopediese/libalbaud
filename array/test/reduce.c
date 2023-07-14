/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:31:20 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 16:38:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_remove(void)
{
	t_arr	arr;

	HEADER;
	arr = arrayn(10, 8, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 2.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");

	remove_at(&arr, 1);
	map(&arr, print_double);
	printf("\n");

	erase(&arr, 1.1);
	map(&arr, print_double);
	printf("\n");

	erase(&arr, 4.4);
	map(&arr, print_double);
	printf("\n");

	remove_at(&arr, 0);
	map(&arr, print_double);
	printf("\n");

	erasen(&arr, -1, 1.1);
	map(&arr, print_double);
	printf("\n");

	infos(&arr);
}

void	test_clear(void)
{
	t_arr	arr;

	HEADER;
	arr = arrayn(10, 8, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 2.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");

	remove_at(&arr, 1);
	map(&arr, print_double);
	printf("\n");

	erase(&arr, 1.1);
	map(&arr, print_double);
	printf("\n");

	erase(&arr, 4.4);
	map(&arr, print_double);
	printf("\n");

	remove_at(&arr, 0);
	map(&arr, print_double);
	printf("\n");

	erasen(&arr, -1, 1.1);
	map(&arr, print_double);
	printf("\n");
	infos(&arr);

	clear_excess(&arr);
	map(&arr, print_double);
	printf("\n");
	infos(&arr);

	clear(&arr);
	map(&arr, print_double);
	printf("\n");
	infos(&arr);
}

void	test_pop(void)
{
	t_arr	arr;
	double	*a;

	HEADER;
	arr = arrayn(10, 8, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10);
	map(&arr, print_double);
	printf("\n");

	a = pop_front(&arr);
	printf("pop_front element %f\n", *a);
	map(&arr, print_double);
	printf("\n");
	delete(a);

	a = pop(&arr);
	printf("pop element %f\n", *a);
	map(&arr, print_double);
	printf("\n");
	delete(a);

	a = pop_front(&arr);
	printf("pop_front element %f\n", *a);
	map(&arr, print_double);
	printf("\n");
	delete(a);

	a = pop(&arr);
	printf("pop element %f\n", *a);
	map(&arr, print_double);
	printf("\n");
	delete(a);

	a = pop_at(&arr, -2);
	printf("pop_at element %f\n", *a);
	map(&arr, print_double);
	printf("\n");
	delete(a);

	a = pop_at(&arr, -2);
	printf("pop_at element %f\n", *a);
	map(&arr, print_double);
	printf("\n");
	delete(a);

	infos(&arr);
}

void	test_unique(void)
{
	t_arr	arr;

	HEADER;
	arr = arrayn(10, 8, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 1.1, 2.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");

	uniquen(&arr, 3);
	map(&arr, print_double);
	printf("\n");

	unique(&arr);
	map(&arr, print_double);
	printf("\n");
	
	infos(&arr);
}


void	test_filter(void)
{
	t_arr	arr;
	t_arr	arr_2;

	HEADER;
	arr = arrayn(10, 8, 1133.1, 1322.1, 121.1, 331.1, 441.1, 4421.1, 1231.1, 342.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");

	filter(&arr, filtre_200);
	map(&arr, print_double);
	printf("\n");

	arr_2 = partition(&arr, filtre_100);
	map(&arr, print_double);
	printf("\n");
	map(&arr_2, print_double);
	printf("\n");

	infos(&arr);
	infos(&arr_2);
}

