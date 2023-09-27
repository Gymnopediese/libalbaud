/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scope.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:10:40 by albaud            #+#    #+#             */
/*   Updated: 2023/09/20 17:06:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

void	new_scope(void)
{
	t_gcn	*last;
	t_gcn	*node;

	last = trashcan()->tail;
	node = new(1, sizeof(t_gcn));
	node->next = trashcan()->scope;
	trashcan()->scope = node;
	node->data = last;
}

void	delete_scope(void *blacklist)
{
	t_gcn	*node;
	t_gcn	*next;
	t_gcn	*tail;

	tail = (trashcan()->scope->data == 0)
		* (long long)trashcan()->head + trashcan()->scope->data;
	if (tail == 0)
		return ;
	trashcan()->scope = trashcan()->scope->next;
	node = tail->next;
	while (node)
	{
		next = node->next;
		if (node->data == blacklist)
		{
			tail->next = node;
			tail = node;
		}
		else
			delete_node(node);
		node = next;
	}
	tail->next = 0;
	trashcan()->tail = tail;
}
