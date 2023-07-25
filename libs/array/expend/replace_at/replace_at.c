/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:04:51 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 13:06:36 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace_at.h"

void	replace_at(t_arr *arr, size_t index, t_elem new)
{
	remove_at(arr, index);
	insert(arr, index, new);
}

void	nreplace_at(t_arr *arr, size_t n, size_t index, t_elem new)
{
	nremove_at(arr, index, n);
	insert(arr, index, new);
}
