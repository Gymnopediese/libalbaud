/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:55:26 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:27:57 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_sub(void)
{
	t_arr	arr;
	t_arr	arr2;

	HEADER;
	arr = arrayn(5, 8, "salut", "les", "amis", "ca", "vas?");
	map(&arr, print_string);
	printf("----------------\n");
	arr2 = subarr(&arr, 2, 4);
	map(&arr2, print_string);
	printf("----------------\n");
	infos(&arr2);
}
