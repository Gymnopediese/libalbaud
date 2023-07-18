/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:46:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/16 18:17:44 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

t_pad	getpadding(char *str, int n)
{
	t_arr	spl;
	size_t	i;
	t_str	s;
	t_pad	res;

	i = -1;
	s = strf(str);
	spl = split(&s, ",", 1);
	if (spl.size != 3)
		error("invalid padding: <pl,size,<f><len>");
	if (spl.strings[1].chars[0] == 'f')
	{
		res.pad = atoi(spl.strings[1].chars + 1);
		res.mode = 1;
	}
	else
	{
		res.pad = atoi(spl.strings[1].chars);
		res.mode = 0;
	}
	res.motif = spl.strings[2].chars;
	res.cote = n;
	return (res);
}

void	apply(t_str *str, t_format *format)
{
	t_str	cpy;

	if (format->casee == 1)
		upper(str);
	else if (format->casee == -1)
		lower(str);
	if (format->pading.cote == 1 && format->pading.mode == 0)
		fill_backv(str, format->pading.pad, format->pading.motif);
	else if (format->pading.cote == 1)
		fill_to_backv(str, format->pading.pad, format->pading.motif);
	else if (format->pading.cote == -1 && format->pading.mode == 0)
		fill_frontv(str, format->pading.pad, format->pading.motif);
	else if (format->pading.cote == -1)
		fill_to_frontv(str, format->pading.pad, format->pading.motif);
	else if (format->pading.cote == 0)
		center(str, format->pading.pad, format->pading.motif);
	if (format->nl)
		extends(str, "\n");
	if (format->repeat)
		cpy = copy(str);
	while (format->repeat-- > 0)
		extend(str, &cpy);
}
