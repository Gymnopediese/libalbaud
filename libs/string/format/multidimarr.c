/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multidimarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:57:29 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:35:18 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

t_str	multidimarrr(char *type, t_arr *arr, t_format *form, int dimention);

int	dimensions(t_arr *arr)
{
	if (arr->s_arr == sizeof(t_arr))
		return (dimensions(&arr->arrays[0]) + 1);
	return (1);
}

t_str	multidimarr(char *type, t_arr *arr, t_format *form)
{
	char	t[2];

	t[1] = 0;
	t[0] = type[2];
	form->dimension = dimensions(arr);
	return (multidimarrr(t, arr, form, form->dimension));
}

t_str	multidimarrr(char *type, t_arr *arr, t_format *form, int dimention)
{
	size_t	i;
	t_str	res;
	t_str	temp;

	res = str("");
	i = -1;
	while (++i < arr->len)
	{
		if (arr->s_arr != sizeof(t_arr))
		{
			temp = typetostr(type, (t_pointer)arr->voidp, i, form);
			if (i < arr->len - 1)
				append(&temp, s(form->separator));
		}
		else
			temp = multidimarrr(type, &arr->arrays[i], form, dimention - 1);
		append(&res, a(&temp));
	}
	if (form->log)
		table(&res, form, dimention);
	if (form->dimension > 1)
		append(&res, v("\n"));
	return (res);
}
