/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counta.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:08:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "count.h"

size_t	counta(t_arr *arr, t_arr *target)
{
	return (countain(arr, target, 0, -1));
}

size_t	countafrom(t_arr *arr, t_arr *target, size_t s)
{
	return (countain(arr, target, s, -1));
}

size_t	countato(t_arr *arr, t_arr *target, size_t e)
{
	return (countain(arr, target, 0, e));
}

size_t	countain(t_arr *arr, t_arr *target, size_t s, size_t e)
{
	return (countvin(arr, s, e, target->arr, target->size));
}
