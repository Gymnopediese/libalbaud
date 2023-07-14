/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:39:32 by albaud            #+#    #+#             */
/*   Updated: 2023/07/12 12:40:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

#define MAX_DIMENSION 10

typedef struct s_format
{
	size_t	length[MAX_DIMENSION];
	size_t	dimension;
	char	*separator;
	int		casee;
	t_str	color;
	int		lpad;
	int		rpad;
	int		cpad;
	int		log;
	int		precision;
}	t_format;

typedef struct s_pad
{
	size_t	pad;
	char	*motif;
	int		cote;
}	t_pad;

void	table(t_arr *res, t_format *form, size_t dimention)
{
	if (dimention == 1)
	{
		centerv(res, 42, " ");
		fill_back(res, form->dimension, '|');
		fill_front(res, form->dimension, '|');
		push(res, '\n');
	}
	fill_back(res, form->dimension - dimention, '|');
	extends(res, "+");
	fill_back(res, 40 + (dimention * 2), '-');
	extends(res, "+");
	fill_back(res, form->dimension - dimention, '|');

	extend_fronts(res, "\n");
	fill_front(res, form->dimension - dimention, '|');
	extend_fronts(res, "+");
	fill_front(res, 40 + (dimention * 2), '-');
	extend_fronts(res, "+");
	fill_front(res, form->dimension - dimention, '|');
}

size_t	memlen(void **data)
{
	size_t	i;

	i = 0;
	while (data[i])
		i++;
	return (i);
}

t_str	selection22(char *type, va_list *l)
{
	t_str	temp;

	temp.arr = 0;
	if (splitcontains("x:hex:hexadecimal", type, ":"))
		return (itob(va_arg(*l, long), HEXADECIMAL_UPPER));
	else if (splitcontains("o:oct:octal", type, ":"))
		return (itob(va_arg(*l, long), OCTAL));
	else if (splitcontains("p:pointer", type, ":"))
	{
		temp = itob(va_arg(*l, unsigned long long), HEXADECIMAL_LOWER);
		extend_fronts(&temp, "0x");
		return (temp);
	}
	else if (splitcontains("X:HEX:HEXADECIMAL", type, ":"))
		return (itob(va_arg(*l, long), HEXADECIMAL_LOWER));
	else
		error("invalid formatage type");
	return (temp);
}

t_str	selection2(char *type, va_list *l)
{
	if (splitcontains("s:str:string:char*", type, ":"))
		return (str(va_arg(*l, char *)));
	else if (splitcontains("i:int:integer", type, ":"))
		return (itoa(va_arg(*l, long long)));
	else if (splitcontains("d:f:double:float", type, ":"))
		return (itod6(va_arg(*l, double)));
	else if (splitcontains("c:char", type, ":"))
		return (arrayn(1, 1, va_arg(*l, int)));
	else
		return (selection22(type, l));
}

// t_str	typetoelement2(char *type, void *elem)
// {
// 	t_str	temp;

// 	temp.arr = 0;

// 	return (temp);
// }

t_str	typetoelement(char *type, t_pointer pointer, size_t i, t_format *format)
{
	t_str	temp;

	temp.arr = 0;
	if (splitcontains("s:str:string:char*", type, ":"))
		return (str(pointer.strings_char[i]));
	else if (splitcontains("i:int:integer", type, ":"))
		return (itoa(pointer.longs[i]));
	else if (splitcontains("d:f:double:float", type, ":"))
		return (itod(pointer.doubles[i], format->precision));
	else if (splitcontains("c:char", type, ":"))
		return (arrayn(1, 1, pointer.chars[i]));
	else if (splitcontains("p:pointer", type, ":"))
		temp = itob(pointer.long_longs[i], HEXADECIMAL_LOWER);
	else
		error("invalid formatage type");
	extend_fronts(&temp, "0x");
	return (temp);
}

t_str	multidimention(char *type, void **data, t_format *form, int dimention)
{
	size_t	i;
	t_str	res;
	t_str	temp;
	size_t	len;

	res = str("");
	i = -1;
	if (form->length[dimention - 1] != 0)
		len = form->length[dimention - 1];
	else if (splitcontains("c:char", type, ":") && dimention == 1)
		len = strlen((char *)data);
	else
		len = memlen(data);
	while (++i < len)
	{
		if (dimention == 1)
		{
			temp = typetoelement(type, (t_pointer)data, i, form);
			if (i < len - 1)
				extends(&temp, form->separator);
		}
		else
		{
			temp = multidimention(type, (void **)data[i], form, dimention - 1);
		}
		extend(&res, &temp);
	}
	if (form->log)
		table(&res, form, dimention);
	push(&res, '\n');
	return (res);
}


void	arguments(t_arr *content, va_list *l, t_str *res)
{
	size_t		i;
	t_format	format;
	t_arr		spl;
	t_str		temp;

	bzero(&format, sizeof(t_format));
	spl = split(content, ":", 1);
	i = 0;
	format.separator = " | ";
	format.precision = 6;
	while (++i < spl.size)
	{
		if (strcmp(spl.strings[i].chars, "low") == 0)
			format.casee = -1;
		else if (strcmp(spl.strings[i].chars, "log") == 0)
			format.log = 1;
		else if (strcmp(spl.strings[i].chars, "len") == 0)
			format.dimension++;
		else if (memcmpn(spl.strings[i].chars, "pl", 2) == 1)
			format.lpad = atoi(spl.strings[i].chars + 2);
		else if (memcmpn(spl.strings[i].chars, "pr", 2) == 1)
			format.rpad = atoi(spl.strings[i].chars + 2);
		else if (memcmpn(spl.strings[i].chars, "pc", 2) == 1)
			format.cpad = atoi(spl.strings[i].chars + 2);
		else if (strcmp(spl.strings[i].chars, "up") == 0)
			format.casee = 1;
		else if (spl.strings[i].chars[0] == 'p')
			format.precision = atoi(spl.strings[i].chars + 1);
		else if (spl.strings[i].chars[0] == 'l')
			format.length[format.dimension++] = atoi(spl.strings[i].chars + 1);
		else if (spl.strings[i].chars[0] == 's')
			format.separator = spl.strings[i].chars + 1;
		else if (splitcontains("red:black:green:yellow:blue:magenta:cyan:reset", spl.strings[i].chars, ":"))
			format.color = strcolor(spl.strings[i].chars);
		else
			error("invalid formatage argument");
	}
	if (splitcontains("red:black:green:yellow:blue:magenta:cyan:reset", spl.strings[0].chars, ":"))
		temp = strcolor(spl.strings[0].chars);
	else if (format.dimension == 0)
		temp = selection2(spl.strings[0].chars, l);
	else
		temp = multidimention(spl.strings[0].chars, va_arg(*l, void **), &format, format.dimension);
	if (format.casee == 1)
		upper(&temp);
	else if (format.casee == -1)
		lower(&temp);
	replace_contents(res, temp.arr, "{", "}");
}

// {type:lnum:up:low:s' alut ':m(c,py)}
// types: s, i, d, c, p, x, X, o + red black green yellow blue magenta cyan
// {s:l100:p  afdas  :}



t_str	format(char *to_format, ...)
{
	va_list	l;
	t_str	res;
	t_arr	content;
	size_t	i;

	new_scope();
	va_start(l, to_format);
	res = str(to_format);
	content = subcontents(&res, "{", "}");
	i = -1;
	while (++i < content.size)
	{
		arguments(&content.strings[i], &l, &res);
	}
	delete_scope(res.voidp);
	return (res);
}
