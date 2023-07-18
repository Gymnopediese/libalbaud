/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:29:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/12 12:16:56 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expend.h"

void	extend(t_arr *left, t_arr *right)
{
	t_arr	res;

	res = array(left->size + right->size, left->s_arr);
	memcpy(res.arr, left->arr, left->size * left->s_arr);
	memcpy(&res.arr[left->size * left->s_arr], right->arr,
		right->size * left->s_arr);
	delete(left->arr);
	res.size = left->size + right->size;
	*left = res;
}

void	extendv(t_arr *left, char *right, size_t len)
{
	t_arr	res;

	res = array(left->size + len, left->s_arr);
	memcpy(res.arr, left->arr, left->size * left->s_arr);
	memcpy(&res.arr[left->size * left->s_arr], right,
		len * left->s_arr);
	delete(left->arr);
	res.size = left->size + len;
	*left = res;
}

void	extend_front(t_arr *left, char *right, size_t len)
{
	t_arr	res;

	res = array(left->size + len, left->s_arr);
	memcpy(&res.arr[len * left->s_arr], left->arr, left->size * left->s_arr);
	memcpy(res.arr, right, len * left->s_arr);
	delete(left->arr);
	res.size = left->size + len;
	*left = res;
}

void	extend_fronts(t_arr *left, char *right)
{
	extend_front(left, right, strlen(right));
}

void	extends(t_arr *left, char *right)
{
	t_arr	res;
	size_t	len;

	len = strlen(right);
	res = array(left->size + len, left->s_arr);
	memcpy(res.arr, left->arr, left->size * left->s_arr);
	memcpy(&res.arr[left->size * left->s_arr], right,
		len * left->s_arr);
	delete(left->arr);
	res.size = left->size + len;
	*left = res;
}

