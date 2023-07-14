/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finda.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:43:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:06:52 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find.h"

void	*finda(t_arr *arr, t_arr *target)
{
	return (findain(arr, target, 0, -1));
}

void	*findafrom(t_arr *arr, t_arr *target, size_t s)
{
	return (findain(arr, target, s, -1));
}

void	*findato(t_arr *arr, t_arr *target, size_t e)
{
	return (findain(arr, target, 0, e));
}

void	*findain(t_arr *arr, t_arr *target, size_t s, size_t e)
{
	return (findvin(arr, s, e, target->arr, target->size));
}
