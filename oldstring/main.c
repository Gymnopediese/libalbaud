/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:18:34 by albaud            #+#    #+#             */
/*   Updated: 2023/06/29 00:11:53 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	main(void)
{
	t_str	*test;

	test = str("salut mec ca vas?");
	printf("%i %i %i %i\n", startwith(test, "salut"), startwith(test, "koko"),  endwith(test, "vas?"),  endwith(test, "asdf"));
	printf("before %s\n", test->chars);
	center(test, 21, '$');
	printf("afters %s\n", test->chars);
	zfill(test, 30);
	printf("afters %s\n", test->chars);
}
