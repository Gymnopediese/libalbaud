/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:02:58 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 16:15:58 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

void	replace(t_arr *arr, t_elem old, t_elem new)
{
	ssize_t	i;

	old.len += (old.len == 0);
	i = indexof(arr, old);
	if (i == -1)
		return ;
	nremove_at(arr, i, old.len);
	insert(arr, i, new);
}

void	nreplace(t_arr *arr, size_t n, t_elem old, t_elem new)
{
	ssize_t	i;

	old.len += (old.len == 0);
	i = indexof(arr, old);
	while (n-- && i != -1)
	{
		nremove_at(arr, i, old.len);
		insert(arr, i, new);
		i = indexfrom(arr, i + new.len, old);
	}
}
