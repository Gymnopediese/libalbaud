/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:52:59 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 18:43:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	upper(t_str *str)
{
	size_t	i;

	i = -1;
	while (++i < str->size)
		str->arr[i] = ctoupper(str->arr[i]);
}

void	lower(t_str *str)
{
	size_t	i;

	i = -1;
	while (++i < str->size)
		str->arr[i] = ctolower(str->arr[i]);
}

void	capitalize(t_str *str)
{
	lower(str);
	str->arr[0] = ctoupper(str->arr[0]);
}
