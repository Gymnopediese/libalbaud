/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subcontent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:11:08 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 13:01:57 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../array.h"

t_arr	subcontent(t_arr *arr, t_elem start, t_elem end)
{
	t_arr	res;
	size_t	ss;
	size_t	ee;

	res = array(1, sizeof(t_arr));
	ee = 0;
	while (1)
	{
		ss = indexfrom(arr, ee, start);
		ee = indexfrom(arr, ee, end);
		if (ee < ss)
			error("invalid content");
		if (ee == ss)
			return (res);
		if (ss + 1 <= ee - 1)
			append(&res, e(&res, subarr(arr, ss + 1, ee - 1)));
		ee += end.len;
	}
}
