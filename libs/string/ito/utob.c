/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utob.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 03:26:21 by tate              #+#    #+#             */
/*   Updated: 2023/07/26 02:14:24 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

t_str	utobn(unsigned long long nb, char *base, size_t len)
{
	char				*res;
	unsigned long long	n;
	unsigned long long	i;

	n = nb;
	i = ft_nlen(nb, len);
	res = new(i-- + 1, 1);
	if (n == 0)
	{
		res[0] = 48;
		return (strf(res));
	}
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		res[i] = base[n % len];
		n = n / len;
		i--;
	}
	return (strf(res));
}

t_str	utob(long long nb, char *base)
{
	return (itobn(nb, base, strlen(base)));
}
