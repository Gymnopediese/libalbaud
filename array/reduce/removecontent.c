/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removecontent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:20:31 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 23:34:15 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reduce.h"

void	remove_content(t_arr *arr, size_t n, size_t startt, char *start, size_t endd,char *end)
{
	size_t	s;
	size_t	e;

	while (n--)
	{
		s = indexofv(arr, start, startt);
		e = indexofv(arr, end, endd);
		if (e < s)
			error("invalid content");
		if (e == s)
			return ;
		remove_atn(arr, s, e - s + 1);
	}
}

void	replace_content(t_arr *arr, size_t s_rep, char *rep, size_t startt, char *start, size_t endd,char *end)
{
	size_t	s;
	size_t	e;

	s = indexofv(arr, start, startt);
	e = indexofv(arr, end, endd);
	if (e < s)
		error("invalid content");
	if (e == s)
		return ;
	remove_atn(arr, s, e - s + 1);
	insertv(arr, s, rep, s_rep);
}

void	replace_contents(t_arr *arr, char *rep, char *start, char *end)
{
	replace_content(arr, strlen(rep), rep,
		strlen(start), start, strlen(end), end);
}
