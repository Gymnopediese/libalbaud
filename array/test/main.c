/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:14:21 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 20:39:44 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

typedef struct s_4
{
	int	a;
	int	b;
	int	c;

}	t_4;


int	compare(void *a, void *b)
{
	return (*(double *)a > *(double *)b);
}

void	print_double(void *a)
{
	printf("%f ", *(double *)a);
}

void	printstruct(t_4 *a)
{
	printf("%d\n", a->a);
	printf("%d\n", a->b);
	printf("%d\n", a->c);
}

void	print_string(char **a)
{
	printf("%s\n", *a);
}

int	filtre_200(void *a)
{
	return (*(double *)a > 200);
}

int	filtre_100(void *a)
{
	return (*(double *)a > 1000);
}

// int	main(void)
// {
// 	test_push_front();
// 	test_push();
// 	test_remove();
// 	test_unique();
// 	test_pop();
// 	test_clear();
// 	test_filter();
// 	test_intersect();
// 	test_insert();
// 	test_sub();
// 	test_fill();
// }
