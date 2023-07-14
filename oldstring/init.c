/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:58:30 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 16:38:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"


t_str	*str(char *c_str)
{
	t_str	*res;
	size_t	len;

	len = c_strlen(c_str);
	if (len == 0)
		return (0);
	res = new(sizeof(t_str), 1);
	res->chars = new(len + 1, 1);
	res->length = len;
	res->capacity = len;
	while ((int)(--len) >= 0)
	{
		res->chars[len] = c_str[len];
	}
	return (res);
}

t_str	*strl(char *c_str, size_t len)
{
	t_str	*res;
	size_t	_len;

	_len = c_strlen(c_str);
	if (_len == 0)
		return (0);
	if (_len > len)
		len = _len;
	res = new(sizeof(t_str), 1);
	res->chars = new(len + 1, 1);
	res->length = _len;
	res->capacity = len;
	while ((int)(--len) >= 0)
		res->chars[len] = c_str[len];
	return (res);
}

t_str	*rstrl(t_str *str, size_t len)
{
	char	*temp;

	temp = str->chars;
	if (str->length > len)
		len = str->length;
	str->chars = new(len + 1, 1);
	str->capacity = len;
	while ((int)(--len) >= 0)
		str->chars[len] = temp[len];
	delete(temp);
	return (str);
}

