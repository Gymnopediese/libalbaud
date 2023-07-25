/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 02:16:46 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 02:43:10 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

int	has_hash(t_pair *hash, va_list l)
{
	return (memcmp(hash->hash, va_arg(l, char *), HASH_SIZE) == 0);
}

void	hash(char *o, size_t size, char *res)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (++i < size)
	{
		if (++j >= HASH_SIZE)
			j = 0;
		res[j] = o[i] ^ '#';
		res[j] = res[j] ^ 'h';
		res[j] = res[j] ^ 'a';
		res[j] = res[j] ^ 's';
		res[j] = res[j] ^ 'h';
	}
	while (i < HASH_SIZE && ++j < HASH_SIZE)
		res[j] = 0;
}
