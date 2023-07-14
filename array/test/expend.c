/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:27:49 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:38:34 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_fill(void)
{
	t_arr	arr;
	t_arr	arr2;

	HEADER;
	arr = arrayn(4, 8, 1.1, 2.2, 3.3, 4.4);
	arr2 = arrayn(3, 8, 33.33, 22.22, 11.11);
	map(&arr, print_double);
	printf("\n");

	fill(&arr, 3, 3, 123.321);
	map(&arr, print_double);
	printf("\n");

	infos(&arr);
}

void	test_insert(void)
{
	t_arr	arr;
	t_arr	arr2;

	HEADER;
	arr = arrayn(4, 8, 1.1, 2.2, 3.3, 4.4);
	arr2 = arrayn(3, 8, 33.33, 22.22, 11.11);
	map(&arr, print_double);
	printf("\n");

	insert(&arr, 2, 2.2);
	map(&arr, print_double);
	printf("\n");
	insert(&arr, 5, 3.3);
	map(&arr, print_double);
	printf("\n");
	insert(&arr, 1, 4.4);
	map(&arr, print_double);
	printf("\n");
	insertn(&arr, 3, 3, 0, 0, 0);
	map(&arr, print_double);
	printf("\n");

	inserta(&arr, &arr2, 4);
	map(&arr, print_double);
	printf("\n");

	infos(&arr);
}


void	test_push_front(void)
{
	t_arr	arr;

	HEADER;
	arr = arrayn(4, 8, 1.1, 2.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");

	push_front(&arr, 2.2);
	push_front(&arr, 3.3);
	push_front(&arr, 4.4);
	map(&arr, print_double);
	printf("\n");
	push_frontn(&arr, 4, 1.1, 2.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");
	infos(&arr);
}

void	test_push(void)
{
	t_arr	arr;

	HEADER;
	arr = arrayn(4, 8, 1.1, 2.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");

	push(&arr, 2.2);
	push(&arr, 3.3);
	push(&arr, 4.4);
	map(&arr, print_double);
	printf("\n");
	pushn(&arr, 4, 1.1, 2.2, 3.3, 4.4);
	map(&arr, print_double);
	printf("\n");
	infos(&arr);
}
