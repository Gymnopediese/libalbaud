/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:54:16 by albaud            #+#    #+#             */
/*   Updated: 2023/07/18 12:52:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

int	delete_node(t_nn *node)
{
	free(node->data);
	free(node);
	trashcan()->size -= 1;
	return (1);
}

int	delete(void *to_deletek)
{
	t_nn	*node;
	t_nn	*next;

	node = trashcan()->head;
	if (to_deletek == 0 || node == 0)
		return (0);
	if (node->data == to_deletek)
	{
		if (LOG)
			printf("freeing %p\n", node);
		trashcan()->head = node->next;
		return (delete_node(node));
	}
	while (node->next)
	{
		if (node->next->data == to_deletek)
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

int	delete0(void **to_deletek)
{
	int	res;

	res = delete(*to_deletek);
	if (res)
		*to_deletek = 0;
	return (res);
}

int	deletep(void **to_deletek, size_t size)
{
	while (size--)
		delete(to_deletek[size - 1]);
	return (delete(to_deletek));
}

