/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrange.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:16:51 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 11:46:15 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

t_arr	rrangei(int a, int b)
{
	t_arr	res;

	res = rangei(a, b);
	shuffle(&res);
	return (res);
}

t_arr	rrangeli(long int a, long int b)
{
	t_arr	res;

	res = rangeli(a, b);
	shuffle(&res);
	return (res);
}

t_arr	rrangelli(long long a, long long b)
{
	t_arr	res;

	res = rangelli(a, b);
	shuffle(&res);
	return (res);
}

t_arr	rranged(long a, long b)
{
	t_arr	res;

	res = ranged(a, b);
	shuffle(&res);
	return (res);
}

t_arr	rrangef(long a, long b)
{
	t_arr	res;

	res = rangef(a, b);
	shuffle(&res);
	return (res);
}
