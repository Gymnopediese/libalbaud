/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 00:21:14 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:22:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

#define TABLE_SIZE 50

void	table(t_arr *res, t_format *form, size_t dimention)
{
	if (dimention == 1)
	{
		center(res, TABLE_SIZE + 2, v(" "));
		fillback(res, res->len + form->dimension, s("|"));
		fillfront(res, res->len + form->dimension, s("|"));
		append(res, v("\n"));
	}
	fillback(res, res->len + form->dimension - dimention, s("|"));
	append(res, v("+"));
	fillback(res, res->len + TABLE_SIZE + (dimention * 2), s("-"));
	append(res, v("+"));
	fillback(res, res->len + form->dimension - dimention, s("|"));
	prepend(res, v("\n"));
	fillfront(res, res->len + form->dimension - dimention, s("|"));
	prepend(res, v("+"));
	fillfront(res, res->len + TABLE_SIZE + (dimention * 2), s("-"));
	prepend(res, v("+"));
	fillfront(res, res->len + form->dimension - dimention, s("|"));
}

// void	table(t_arr *res, t_format *form, size_t dimention)
// {
// 	if (dimention == 1)
// 	{
// 		centerv(res, 50 + 2, v(" "));
// 		fill_back(res, form->dimension, '|');
// 		fill_front(res, form->dimension, '|');
// 		push(res, '\n');
// 	}
// 	fill_back(res, form->dimension - dimention, '|');
// 	extends(res, v("+"));
// 	fill_back(res, 50 + (dimention * 2), '-');
// 	extends(res, v("+"));
// 	fill_back(res, form->dimension - dimention, '|');

// 	extend_fronts(res, v("\n"));
// 	fill_front(res, form->dimension - dimention, '|');
// 	extend_fronts(res, v("+"));
// 	fill_front(res, 50 + (dimention * 2), '-');
// 	extend_fronts(res, v("+"));
// 	fill_front(res, form->dimension - dimention, '|');
// }
