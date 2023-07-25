/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:13:10 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 03:19:19 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.h"

t_arr	a_array(t_arr *cpy)
{
	return (l_array(cpy->allocated_space, cpy->arr, cpy->len));
}

t_arr	copy(t_arr	*cpy)
{
	return (a_array(cpy));
}
