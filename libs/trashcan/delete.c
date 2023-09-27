/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:54:16 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 09:43:38 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

int	delete_node(t_gcn *node)
{
	free(node->data);
	free(node);
	trashcan()->size -= 1;
	return (1);
}

int	delete(void *to_delete)
{
	t_gcn	*node;
	t_gcn	*next;

	node = trashcan()->head;
	if (to_delete == 0 || node == 0)
		return (0);
	if (node->data == to_delete)
	{
		if (LOG)
			printf("freeing %p\n", node);
		trashcan()->head = node->next;
		return (delete_node(node));
	}
	while (node->next)
	{
		if (node->next->data == to_delete)
		{
			if (LOG)
				printf("freeing %p\n", node);
			next = node->next;
			if (node->next == trashcan()->tail)
				trashcan()->tail = node;
			node->next = next->next;
			return (delete_node(next));
		}
		node = node->next;
	}
	return (0);
}

int	delete0(void **to_delete)
{
	int	res;

	res = delete(*to_delete);
	if (res)
		*to_delete = 0;
	return (res);
}

int	deletepl(void **to_delete, size_t size)
{
	if (size == 0)
		size = -1;
	while (size-- && to_delete[size])
		delete(to_delete[size - 1]);
	return (delete(to_delete));
}

int	deletep(void **to_delete)
{
	size_t	size;

	size = -1;
	while (to_delete[++size])
		delete(to_delete[size]);
	return (delete(to_delete));
}
