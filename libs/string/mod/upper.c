/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:52:59 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 17:31:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mod.h"

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

void	title(t_str *str)
{
	size_t	i;

	str->arr[0] = ctoupper(str->arr[0]);
	i = 0;
	while (++i < str->size)
	{
		if (str->arr[i - 1] == ' ')
			str->arr[i] = ctoupper(str->arr[i]);
		else
			str->arr[i] = ctolower(str->arr[i]);
	}
}

void	swapcase(t_str *str)
{
	size_t	i;

	i = -1;
	while (++i < str->size)
	{
		if (cisupper(&str->arr[i]))
			str->arr[i] = ctolower(str->arr[i]);
		else
			str->arr[i] = ctoupper(str->arr[i]);
	}
}
