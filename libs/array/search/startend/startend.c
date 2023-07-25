/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startend.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:54:05 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 16:56:08 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "startend.h"

int	startwith(t_arr *arr, t_elem elem)
{
	return (indexof(arr, elem) == 0);
}

int	endwith(t_arr *arr, t_elem elem)
{
	return (indexof(arr, elem) == arr->size - elem.len);
}
