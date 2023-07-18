/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:53:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/12 12:52:41 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

void	*new(int amount, int size)
{
	int		i;
	char	*res;

	res = malloc(amount * size);
	add_pointer(res, amount, size);
	if (LOG)
		printf("new allocation of %d bytes %p\n", amount * size, res);
	i = -1;
	while (++i < size * amount)
		res[i] = 0;
	return (res);
}
