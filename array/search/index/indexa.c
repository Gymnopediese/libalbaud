/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexofa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 14:20:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "index.h"

size_t	indexofa(t_arr *arr, t_arr *target)
{
	return (indexofain(arr, target, 0, -1));
}

size_t	indexofafrom(t_arr *arr, t_arr *target, size_t s)
{
	return (indexofain(arr, target, s, -1));
}

size_t	indexofato(t_arr *arr, t_arr *target, size_t e)
{
	return (indexofain(arr, target, 0, e));
}

size_t	indexofain(t_arr *arr, t_arr *target, size_t s, size_t e)
{
	return (indexofvin(arr, s, e, target->arr, target->size));
}
