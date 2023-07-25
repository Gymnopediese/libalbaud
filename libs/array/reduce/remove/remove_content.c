/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_content.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:20:31 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 12:50:36 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remove.h"

void	remove_content(t_arr *arr, size_t n, t_elem start, t_elem end)
{
	size_t	s;
	size_t	e;

	while (n--)
	{
		s = indexof(arr, start);
		e = indexof(arr, end);
		if (e < s)
			error("invalid content");
		if (e == s)
			return ;
		nremove_at(arr, s, e - s + 1);
	}
}

void	replace_content(t_arr *arr, t_elem new, t_elem start, t_elem end)
{
	size_t	s;
	size_t	e;

	s = indexof(arr, start);
	e = indexof(arr, end);
	if (e < s)
		error("invalid content");
	if (e == s)
		return ;
	nremove_at(arr, s, e - s + 1);
	insert(arr, s, new);
}
