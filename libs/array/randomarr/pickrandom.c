/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pickrandom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:12:23 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:46:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomarr.h"

t_pointer	pickrandom(t_arr *arr)
{
	return (getr(arr, randint(0, arr->size - 1)));
}
