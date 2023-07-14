/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itob.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 03:26:21 by tate              #+#    #+#             */
/*   Updated: 2023/07/08 13:46:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

int	ft_nlen(long nb, int n)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / n;
		len++;
	}
	if (len == 0)
		len = 1;
	return (len);
}

t_str	itobn(long long nb, char *base, size_t len)
{
	char		*res;
	long long	n;
	long long	i;

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

t_str	itob(long long nb, char *base)
{
	printf("lli %lli\n", nb);
	return (itobn(nb, base, strlen(base)));
}
