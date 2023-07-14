/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subcontent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:11:08 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 19:56:12 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_arr	subcontent(t_arr *arr, size_t startt, char *start, size_t endd,char *end)
{
	t_arr	res;
	size_t	s;
	size_t	e;

	res = array(1, sizeof(t_arr));
	e = 0;
	while (1)
	{
		s = indexofvfrom(arr, e, start, startt);
		e = indexofvfrom(arr, e, end, endd);
		if (e < s)
			error("invalid content");
		if (e == s)
			return (res);
		if (s + 1 <= e - 1)
			push(&res, subarr(arr, s + 1, e - 1));
		e += endd;
	}
}

t_arr	subcontents(t_arr *arr, char *start, char *end)
{
	return (subcontent(arr, strlen(start), start, strlen(end), end));
}
