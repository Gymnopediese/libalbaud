/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:18:29 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 04:21:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

void	test_split(void)
{
	// make a serie of tests for my split function
	t_arr	arr;
	t_str	string;

	string = str("salut:mec");
	printf("%s\n", string.arr);
	arr = split(&string, ":", 1);
	printf("%zu\n", arr.size);
	for (size_t i = 0; i < arr.size; i++)
	{
		printf("%s\n", ((t_str*)arr.arr)[i].arr);
	}

	// make more tests for my split function
	string = str("salut:mec:ca:va");
	printf("%s\n", string.arr);
	arr = split(&string, ":", 1);
	printf("%zu\n", arr.size);
	for (size_t i = 0; i < arr.size; i++)
	{
		printf("%s\n", ((t_str*)arr.arr)[i].arr);
	}

	string = str("::::::::::");
	printf("%s\n", string.arr);
	arr = split(&string, ":", 1);
	printf("%zu\n", arr.size);
	for (size_t i = 0; i < arr.size; i++)
	{
		printf("%s\n", ((t_str*)arr.arr)[i].arr);
	}
	infos(&arr);

	string = str("::salue::le::monde::");
	printf("%s\n", string.arr);
	arr = split(&string, "::", 2);
	printf("%zu\n", arr.size);
	for (size_t i = 0; i < arr.size; i++)
	{
		printf("%s\n", ((t_str*)arr.arr)[i].arr);
	}
	infos(&arr);

	string = str("                 salut                     ");
	printf("%s\n", string.arr);
	arr = split(&string, " ", 1);
	printf("%zu\n", arr.size);
	for (size_t i = 0; i < arr.size; i++)
	{
		printf("%s\n", ((t_str*)arr.arr)[i].arr);
	}

	char	**set = (char *[]){" ", ":", ";", ".", "?", "!", NULL};
	
	string = str("salut mec; coment ca va: bien. et toi?");
	printf("%s\n", string.arr);
	arr = splitset(&string, set);
	printf("%zu\n", arr.size);
	for (size_t i = 0; i < arr.size; i++)
	{
		printf("%s$\n", ((t_str*)arr.arr)[i].arr);
	}
}

void	test_subcontent(void)
{
	t_str	string;
	t_arr	arr;

	string = str("{okok}salut {je mappelle alexandre}{c'est beau}{} comment ca va{salut}");
	printf("%s\n", string.arr);
	arr = subcontent(&string, 1, "{", 1, "}");
	printf("%zu\n", arr.size);
	for (size_t i = 0; i < arr.size; i++)
	{
		printf("%s$\n", ((t_str*)arr.arr)[i].arr);
	}

	string = str("{okok}salut {je mappelle alexandre}{c'est beau}{} comment ca va{salut}");
	printf("%s\n", string.arr);
	remove_content(&string, 1, 1, "{", 1, "}");
	printf("%s\n", string.arr);
	replace_contents(&string, "|tro beau|",  "{", "}");
	printf("%s\n", string.arr);
}
