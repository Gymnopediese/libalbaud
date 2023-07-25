/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scope.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:10:40 by albaud            #+#    #+#             */
/*   Updated: 2023/07/22 16:45:54 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

void	new_scope(void)
{
	t_nn	*last;
	t_nn	*node;

	last = trashcan()->tail;
	node = new(1, sizeof(t_nn));
	node->next = trashcan()->scope;
	trashcan()->scope = node;
	node->data = last;
}

void	delete_scope(void *blacklist)
{
	t_nn	*node;
	t_nn	*next;
	t_nn	*tail;

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
