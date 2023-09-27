/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 02:39:06 by albaud            #+#    #+#             */
/*   Updated: 2023/09/20 17:06:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

size_t	alloc_count(void *p)
{
	t_gcn	*node;

	node = trashcan()->head;

	while (node)
	{
		if (node->data == p)
			return (node->count);
		node = node->next;
	}
	return (-1);
}

size_t	alloc_length(void *p)
{
	t_gcn	*node;

	node = trashcan()->head;

	while (node)
	{
		if (node->data == p)
			return (node->count * node->size);
		node = node->next;
	}
	return (-1);
}

size_t	alloc_size(void *p)
{
	t_gcn	*node;

	node = trashcan()->head;

	while (node)
	{
		if (node->data == p)
			return (node->size);
		node = node->next;
	}
	return (-1);
}

int	is_allocated(void *p)
{
	t_gcn	*node;

	node = trashcan()->head;
	while (node)
	{
		if (node->data == p)
			return (1);
		node = node->next;
	}
	return (0);
}
