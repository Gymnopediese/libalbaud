/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:43:41 by albaud            #+#    #+#             */
/*   Updated: 2023/07/16 21:45:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

t_str	typetostr(char *type, t_pointer pointer, size_t i, t_format *format)
{
	t_str	temp;

	temp.arr = 0;
	if (splitcontains("s:str:string:char*", type, ":"))
		return (str(pointer.strings_char[i]));
	else if (splitcontains("i:int:integer", type, ":"))
		return (itobn(pointer.ints[i], BASEN, format->base));
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
