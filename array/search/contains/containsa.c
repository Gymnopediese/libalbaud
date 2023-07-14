/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containsa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:13:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contains.h"

int	containsa(t_arr *arr, t_arr *target)
{
	return (containsain(arr, target, 0, -1));
}

int	containsafrom(t_arr *arr, t_arr *target, size_t s)
{
	return (containsain(arr, target, s, -1));
}

int	containsato(t_arr *arr, t_arr *target, size_t e)
{
	return (containsain(arr, target, 0, e));
}

int	containsain(t_arr *arr, t_arr *target, size_t s, size_t e)
{
	return (containsvin(arr, s, e, target->arr, target->size));
}
