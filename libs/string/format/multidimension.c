/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multidimension.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:36:32 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 16:51:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

size_t	dimlen(char *type, void **data, t_format *form, int dimention)
{
	if (form->length[dimention - 1] != 0)
		return (form->length[dimention - 1]);
	else if (splitcontains("c:char", type, ":") && dimention == 1)
		return (strlen((char *)data));
	else
		return (memlen(data));
}

size_t	dimlenarr(void **data, t_format *form, int dimention)
{
	if (form->length[dimention - 1] != 0)
		return (form->length[dimention - 1]);
	else
		return (((t_arr *)data)->size);
}

t_str	multidimention(char *type, void **data, t_format *form, int dimention)
{
	size_t	i;
	t_str	res;
	t_str	temp;
	size_t	len;

	res = str("");
	i = -1;
	len = dimlen(type, data, form, dimention);
	while (++i < len)
	{
		if (dimention == 1)
		{
			temp = typetostr(type, (t_pointer)data, i, form);
			if (i < len - 1)
				extends(&temp, form->separator);
		}
		else
			temp = multidimention(type, (void **)data[i], form, dimention - 1);
		extend(&res, &temp);
	}
	if (form->log)
		table(&res, form, dimention);
	if (form->dimension > 1)
		push(&res, '\n');
	return (res);
}
