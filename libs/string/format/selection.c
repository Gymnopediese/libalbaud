/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:49:24 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:21:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

t_str	pointerstr(void *p)
{
	t_str	res;

	res = itob((unsigned long long) p, HEXADECIMAL_LOWER);
	prepend(&res, s("0x"));
	return (res);
}

// t_str	selection2(char *type, va_list *l)
// {
// 	t_str	temp;

// 	temp.arr = 0;
	
// 	return (temp);
// }

t_str	va_strf(char *type, va_list *l, t_format *format)
{
	if (splitcontains("s:str:string:char*", type, ":"))
		return (str(va_arg(*l, char *)));
	else if (splitcontains("i:int:integer", type, ":"))
		return (itobn(va_arg(*l, long long), BASEN, format->base));
	else if (splitcontains("d:f:double:float", type, ":"))
		return (itod(va_arg(*l, double), format->precision));
	else if (splitcontains("c:char", type, ":"))
		return (e_array(1, va_arg(*l, int)));
	else if (splitcontains("x:hex:hexadecimal", type, ":"))
		return (itob(va_arg(*l, long), HEXADECIMAL_UPPER));
	else if (splitcontains("o:oct:octal", type, ":"))
		return (itob(va_arg(*l, long), OCTAL));
	else if (splitcontains("p:pointer", type, ":"))
		return (pointerstr(va_arg(*l, void *)));
	else if (splitcontains("X:HEX:HEXADECIMAL", type, ":"))
		return (itob(va_arg(*l, long), HEXADECIMAL_LOWER));
	else
		error("invalid formatage typeo");
	return (str(""));
}


t_str	va_str(char *type, va_list *l)
{
	if (splitcontains("s:str:string:char*", type, ":"))
		return (str(va_arg(*l, char *)));
	else if (splitcontains("i:int:integer", type, ":"))
		return (itoa(va_arg(*l, long long)));
	else if (splitcontains("d:f:double:float", type, ":"))
		return (itod6(va_arg(*l, double)));
	else if (splitcontains("c:char", type, ":"))
		return (e_array(1, va_arg(*l, int)));
	else if (splitcontains("x:hex:hexadecimal", type, ":"))
		return (itob(va_arg(*l, long), HEXADECIMAL_UPPER));
	else if (splitcontains("o:oct:octal", type, ":"))
		return (itob(va_arg(*l, long), OCTAL));
	else if (splitcontains("p:pointer", type, ":"))
		return (pointerstr(va_arg(*l, void *)));
	else if (splitcontains("X:HEX:HEXADECIMAL", type, ":"))
		return (itob(va_arg(*l, long), HEXADECIMAL_LOWER));
	else
		error("invalid formatage typeo");
	return (str(""));
}
