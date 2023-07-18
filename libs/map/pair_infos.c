/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair_infos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:18:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 12:11:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	pair_infos(t_pair *pair)
{
	printf("printing pair infos\n");
	write(1, "key:\t", 5);
	write(1, pair->key, pair->s_key);
	printf("\ns_key:\t%zu\n", pair->s_key);
	write(1, "value:\t", 7);
	write(1, pair->value, pair->s_value);
	printf("\ns_value:\t%zu\n", pair->s_value);
	write(1, "hash:\t", 6);
	write(1, pair->hash, HASH_SIZE);
	printf("\n");
}
