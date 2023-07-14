/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startwith.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 00:01:12 by albaud            #+#    #+#             */
/*   Updated: 2023/06/29 00:09:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	startwith(t_str *str, char *target)
{
	size_t	a;
	size_t	b;

	a = -1;
	b = -1;
	while (str->chars[++a] && target[++b] && str->chars[a] == target[b])
		;
	return (b == c_strlen(target));
}

int	endwith(t_str *str, char *target)
{
	size_t	a;
	size_t	b;

	a = str->length;
	b = c_strlen(target);
	while ((int)(--a) >= 0 && (int)(--b) >= 0 && str->chars[a] == target[b])
		;
	return ((int)b <= 0);
}
