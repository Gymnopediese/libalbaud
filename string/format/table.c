/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 00:21:14 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 16:53:38 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

void	table(t_arr *res, t_format *form, size_t dimention)
{
	if (dimention == 1)
	{
		centerv(res, 50 + 2, " ");
		fill_back(res, form->dimension, '|');
		fill_front(res, form->dimension, '|');
		push(res, '\n');
	}
	fill_back(res, form->dimension - dimention, '|');
	extends(res, "+");
	fill_back(res, 50 + (dimention * 2), '-');
	extends(res, "+");
	fill_back(res, form->dimension - dimention, '|');

	extend_fronts(res, "\n");
	fill_front(res, form->dimension - dimention, '|');
	extend_fronts(res, "+");
	fill_front(res, 50 + (dimention * 2), '-');
	extend_fronts(res, "+");
	fill_front(res, form->dimension - dimention, '|');
}
