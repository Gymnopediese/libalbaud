/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 14:10:27 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contains.h"

int	containss(t_arr *arr, char *target)
{
	return (containssin(arr, 0, arr->size, target));
}

int	containssfrom(t_arr *arr, size_t s, char *target)
{
	return (containssin(arr, s, arr->size, target));
}

int	containssto(t_arr *arr, size_t e, char *target)
{
	return (containssin(arr, 0, e, target));
}

int	containssin(t_arr *arr, size_t s, size_t e, char *target)
{
	return (containsvin(arr, s, e, target, strlen(target)));
}
