/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:13:51 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 17:15:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trim.h"

void	trimleft(t_arr *arr, t_elem elem)
{
	while (startwith(arr, elem))
		nremove_at(arr, 0, elem.len);
}

void	trimright(t_arr *arr, t_elem elem)
{
	while (endwith(arr, elem))
		nremove_at(arr, -elem.len, elem.len);
}

void	trim(t_arr *arr, t_elem elem)
{
	trimleft(arr, elem);
	trimright(arr, elem);
}
