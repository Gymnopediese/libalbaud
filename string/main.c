/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:27:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/12 12:53:09 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	test_ito(void)
{
	t_str	string;

	string = itoa(42);
	printf("%s\n", string.arr);
	string = itoa(0);
	printf("%s\n", string.arr);
	string = itoa(-42);
	printf("%s\n", string.arr);


	string = itod6(42.42);
	printf("%s\n", string.arr);
	string = itod6(0);
	printf("%s\n", string.arr);
	string = itod6(-42.42);
	printf("%s\n", string.arr);

	string = itod(42.42, 0);
	printf("%s\n", string.arr);
	string = itod(0, 10);
	printf("%s\n", string.arr);
	string = itod(-42.42424242424242424242, 16);
	printf("%s\n", string.arr);
}

void	test_oformat(void)
{
	t_str	string;

	string = oformat("salut %s", "monde");
	printf("%s\n", string.arr);

	string = oformat("salut %s %i", "monde", 2);
	printf("%s\n", string.arr);

	string = oformat("salut %s %i %s", "monde", 2, "merde");
	printf("%s\n", string.arr);

	string = oformat("salut %s %f %s", "monde", 2.234, "merde");
	printf("%s\n", string.arr);

	string = oformat("%s%f%s%c%c%c", "monde", 2.234, "merde", 'a', 'b', 'c');
	printf("%s\n", string.arr);

	string = oformat("salut %p %p %x %X %o", "fuck", 0, 42, 42, 42);
	printf("%s\n", string.arr);
}

void	test_format(void)
{
	t_str	string;
	new_scope();
	string = format("salut {s}", "monde");
	printf("%s\n", string.arr);

	string = format("salut\n{red}{c:l5:log}{reset} salut", "monde");
	printf("%s\n", string.arr);

	string = format("salut {red}salut{reset}");
	printf("%s\n", string.arr);

	char *** sal = (char **[]){
		(char *[]) {"salut", "salut", 0},
		(char *[]) {"wsh", "frere", 0},
		(char *[]) {"ma", "geul", 0},
		0,
	};

	string = format("{c:len:len:len:log}", sal);
	printf("OMG%s\nOMGGGGGGGGGGGGGGG\n", string.arr);

	char **** salsa = (char ***[]){
		(char **[]){
			(char *[]) {"salut", "salut", 0},
			(char *[]) {"wsh", "frere", 0},
			0,
		},
		(char **[]){
			(char *[]) {"mais", "endt", 0},
			(char *[]) {"trop", "fimems", 0},
			0,
		},
		0
	};
	string = format("{c:len:len:len:len:up:log}", salsa);
	printf("%s\n", string.arr);


	string = format("{s:len:len:len:log}", salsa);
	printf("%s\n", string.arr);

	double ** nums = (double *[]){
		(double []) {1.1, 2.2, 3.3},
		(double []) {2.2, 3.3, 4.4},
		(double []) {3.3, 4.4, 5.5},
		0,
	};
	string = format("{d:l3:l3:p2:log}", nums);
	printf("%s\n", string.arr);
	delete_scope(0);
}


int	main(void)
{
	t_str	string;

	new_scope();
	string = str("salutlesamis");
	infos(&string);
	printf("%s\n", string.arr);
	fill_front(&string, 5, 'o');
	fill_back(&string, 5, 'o');
	printf("%s\n", string.arr);
	printf("upper %i\n", are_all(&string, &cisupper));
	printf("lower %i\n", are_all(&string, &cislower));
	center(&string, string.size + 5, 'O');
	printf("%s\n", string.arr);
	test_ito();
	test_oformat();
	test_extract();
	test_split();
	test_subcontent();
	test_format();
	delete_scope(0);
	quit();
}
