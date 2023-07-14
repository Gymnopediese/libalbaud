/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstrsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:56:17 by albaud            #+#    #+#             */
/*   Updated: 2023/07/12 12:39:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	condition(char *sep, t_str *s)
{
	return (strcmp(s->arr, sep) == 0);
}

int	splitcontains(char *string, char *target, char *sep)
{
	t_arr		sp;
	int			res;
	t_str		s;

	s = str(string);
	sp = split(&s, sep, strlen(sep));
	res = indexofff(&sp, target, condition);
	return (res != -1);
}