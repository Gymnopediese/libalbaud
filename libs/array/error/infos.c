/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:35:27 by albaud            #+#    #+#             */
/*   Updated: 2023/07/22 16:27:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"

void	infos(t_arr *arr)
{
	printf("printing array infos\n");
	printf("elem_size:\t%zu\n", arr->s_arr);
	printf("size:\t\t%zu\n", arr->size);
	printf("raw_size:\t%zu\n", arr->size * arr->s_arr);
	printf("capacity:\t%zu\n", arr->capacity);
	printf("raw_capacity:\t%zu\n", arr->capacity * arr->s_arr);
}
