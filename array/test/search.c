/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:41:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 22:49:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_intersect(void)
{
	t_arr	a;
	t_arr	b;
	t_arr	c;

	HEADER;
	a = arrayn(5, 8, 1.0, 2.0, 3.0, 4.0, 5.0);
	b = arrayn(5, 8, 4.0, 5.0, 6.0, 7.0, 8.0);

	map(&a, print_double);
	printf("\n");
	map(&b, print_double);
	printf("\n");

	c = intersect(&a, &b, and_opp);
	map(&c, print_double);
	printf("\n");

	c = intersect(&a, &b, or_opp);
	map(&c, print_double);
	printf("\n");

	c = intersect(&a, &b, xor_opp);
	map(&c, print_double);
	printf("\n");

	c = intersect(&a, &b, nand_opp);
	map(&c, print_double);
	printf("\n");

}