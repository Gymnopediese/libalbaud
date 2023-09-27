/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:50:18 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:05:59 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

#include <string.h>

void	assert(int condition, char *text)
{
	if (condition)
		error(text);
}

void	error(char *text)
{
	t_gcn	*node;
	t_gcn	*next;

	if (text)
		printf("%s%s:%s %s%s%s\n",
			TRED, PROGRAM_NAME, RESET, TBLUE, text, RESET);
	node = trashcan()->head;
	while (node)
	{
		next = node->next;
		delete_node(node);
		node = next;
	}
	if (SEGFAULT_ERROR)
	{
		printf("%s", "Libalbaud: SEGFAULT_ERROR == true, segfaulting... (((int *)42)[42] = 42)\n");
		memcpy((int *)42, (int *)43, 42);
	}
	exit(1);
}
