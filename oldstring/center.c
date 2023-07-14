/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   center.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:07:17 by albaud            #+#    #+#             */
/*   Updated: 2023/06/29 11:33:05 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	center(t_str *str, size_t len, char pattern)
{
	size_t	i;
	size_t	j;

	if (str->length > len)
		return ;
	if (str->capacity < len)
		str = rstrl(str, len);
	i = len;
	j = len - (len - str->length) / 2 ;
	while ((int)(--i) >= 0)
		cswap(&str->chars[i], &str->chars[--j]);
	i = -1;
	while (++i < (len - str->length) / 2)
		str->chars[i] = pattern;
	i = len - (len - str->length) / 2 - 2;
	while (++i < len)
		str->chars[i] = pattern;
	str->length = len;
}

void	zfill(t_str *str, size_t len)
{
	size_t	i;
	size_t	j;

	if (str->length > len)
		return ;
	if (str->capacity < len)
		str = rstrl(str, len);
	i = str->length;
	j = len;
	while ((int)(--i) >= 0)
		cswap(&str->chars[i], &str->chars[--j]);
	i = -1;
	while (++i < (len - str->length))
		str->chars[i] = '0';
	str->length = len;
}

