/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair_infos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:18:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:25:51 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minfos.h"

void	pair_infos(t_pair *pair)
{
	printf("printing pair infos\n");
	write(1, "key:\t", 5);
	write(1, pair->key.arr, pair->key.len);
	printf("\ns_key:\t%zu\n", pair->key.len);
	write(1, "value:\t", 7);
	write(1, pair->value.arr, pair->value.len);
	printf("\ns_value:\t%zu\n", pair->value.len);
	write(1, "hash:\t", 6);
	write(1, pair->hash, HASH_SIZE);
	printf("\n");
}
