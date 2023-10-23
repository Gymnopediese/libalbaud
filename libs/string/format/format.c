/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:39:32 by albaud            #+#    #+#             */
/*   Updated: 2023/10/23 17:43:32 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

size_t	memlen(void **data)
{
	size_t	i;

	i = 0;
	while (data[i])
		i++;
	return (i);
}

void	arguments(t_arr *content, va_list *l, t_str *res)
{
	size_t		i;
	t_format	format;
	t_arr		spl;
	t_str		temp;

	bzero(&format, sizeof(t_format));
	spl = split(content, s(":"));
	i = 0;
	format.separator = " | ";
	format.precision = 6;
	format.pading.cote = 10;
	format.base = 10;
	while (++i < spl.size)
		format_arg(&format, spl.strings[i].chars);
	if (spl.strings[0].chars[0] == 'a' && ++format.dimension)
		temp = multidimarr(spl.strings[0].chars, va_arg(*l, t_arr *),
				&format);
	else if (splitcontains(COLOR_SPLIT, spl.strings[0].chars, ":"))
		temp = strcolor(spl.strings[0].chars);
	else if (format.dimension == 0)
		temp = va_strf(spl.strings[0].chars, l, &format);
	else
		temp = multidimention(spl.strings[0].chars, va_arg(*l, void **),
				&format, format.dimension);
	apply(&temp, &format);
	replace_content(res, a(&temp), v("{"), v("}"));
}

// {type:lnum:up:low:s' alut ':m(c,py)}
// types: s, i, d, c, p, x, X, o + red black green yellow blue magenta cyan
// {s:l100:p  afdas  :}
t_str	va_format(char *to_format, va_list *l)
{
	t_str	res;
	t_arr	content;
	size_t	i;

	new_scope();
	res = str(to_format);
	content = subcontent(&res, v("{"), v("}"));
	i = -1;
	while (++i < content.size)
		arguments(&content.strings[i], l, &res);
	delete_scope(res.voidp);
	return (res);
}

t_str	format(char *to_format, ...)
{
	va_list	l;

	va_start(l, to_format);
	return (va_format(to_format, &l));
}
