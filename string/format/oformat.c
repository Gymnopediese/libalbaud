/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oformat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:09:09 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 04:19:16 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

void	selection21(t_str *res, va_list *l, size_t s)
{
	t_str	temp;

	if (res->arr[s + 1] == 'X')
		temp = itob(va_arg(*l, long), HEXADECIMAL_UPPER);
	else if (res->arr[s + 1] == 'o')
		temp = itob(va_arg(*l, long), OCTAL);
	else if (res->arr[s + 1] == '%')
		temp = arrayn(1, 1, '%');
	else if (res->arr[s + 1] == 'p')
	{
		temp = itob(va_arg(*l, unsigned long long), HEXADECIMAL_LOWER);
		extend_fronts(&temp, "0x");
	}
	else if (res->arr[s + 1] == 'x')
		temp = itob(va_arg(*l, long), HEXADECIMAL_LOWER);
	else
		error("invalid formatage type");
	insert_on_at(res, s, 2, &temp);
	delete(temp.arr);
}

void	selection(t_str *res, va_list *l, size_t s)
{
	t_str	temp;

	if (res->arr[s + 1] == 's')
		temp = str(va_arg(*l, char *));
	else if (res->arr[s + 1] == 'i' || res->arr[s + 1] == 'd')
		temp = itoa(va_arg(*l, long long));
	else if (res->arr[s + 1] == 'f')
		temp = itod6(va_arg(*l, double));
	else if (res->arr[s + 1] == 'c')
		temp = arrayn(1, 1, va_arg(*l, int));
	else if (res->arr[s + 1] == '%')
		temp = arrayn(1, 1, '%');
	else
	{
		selection21(res, l, s);
		return ;
	}
	insert_on_at(res, s, 2, &temp);
	delete(temp.arr);
}

t_str	oformat(char *to_format, ...)
{
	va_list	l;
	size_t	s;
	t_str	res;

	va_start(l, to_format);
	res = str(to_format);
	s = indexof(&res, '%');
	while (s < (size_t)-1)
	{
		if (s == res.size)
			error("invalid formatage string");
		selection(&res, &l, s);
		s = indexoffrom(&res, s, '%');
	}
	return (res);
}
