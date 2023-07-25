/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstrsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:56:17 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:28:17 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	condition(t_str *s, va_list l)
{
	return (nocasefcmp(va_arg(l, char *), s->arr) == 0);
}

int	splitcontains(char *string, char *target, char *sep)
{
	t_arr		sp;
	int			res = 0;
	t_str		st;

	st = str(string);
	sp = split(&st, s(sep));
	res = findexof(&sp, condition, target);
	return (res != -1);
}
