/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containsv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 13:35:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contains.h"

int	containsv(t_arr *arr, char *target, size_t size)
{
	return (containsvin(arr, 0, -1, target, size));
}

int	containsvfrom(t_arr *arr, size_t s, char *target, size_t size)
{
	return (containsvin(arr, s, -1, target, size));
}

int	containsvto(t_arr *arr, size_t e, char *target, size_t size)
{
	return (containsvin(arr, 0, e, target, size));
}

int	containsvin(t_arr *arr, size_t s, size_t e, char *target, size_t size)
{
	return (indexofvin(arr, s, e, target, size) != (size_t)-1);
}
