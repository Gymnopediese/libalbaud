/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:40:28 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:46:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

int	len(long long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

t_str	itoa(long long int nb)
{
	char		*res;
	long long	n;
	long long	i;

	n = nb;
	i = len(n);
	res = new((i + 1), sizeof(char));
	res[i--] = '\0';
	res[0] = 48;
	if (n == 0)
		return (strf(res));
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		res[i--] = 48 + (n % 10);
		n = n / 10;
	}
	return (strf(res));
}
