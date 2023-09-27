/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_trashcan.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:37:09 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:06:09 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

#ifndef PROGRAM_NAME
# define PROGRAM_NAME "libc"
#endif

t_gbc	*trashcan(void)
{
	static t_gbc	gb[1];
	static int	init = 0;

	if (init == 0 && ++init)
		*gb = (t_gbc){0, 0, 0, 0};
	return (gb);
}

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}

void	quit(void)
{
	t_gcn	*node;
	t_gcn	*next;
	size_t	total_size;
	size_t	element;
	size_t	s;

	node = trashcan()->head;
	total_size = 0;
	element = 0;
	s = trashcan()->size;
	while (node)
	{
		next = node->next;
		element += node->count;
		total_size += node->count * node->size;
		delete_node(node);
		node = next;
	}
	printf("%squiting the program by freing %zu pointers containing %zu element for a total length of %zubytes%s\n", TGREEN, s, element, total_size, RESET);
	exit(0);
}

void	add_pointer(void *p, size_t amount, size_t size)
{
	t_gbc	*gb;
	t_gcn	*node;

	if (p == 0)
		error("null pointer returned by malloc");
	node = malloc(sizeof(t_gcn));
	if (node == 0)
		error("null pointer returned by malloc");
	gb = trashcan();
	node->data = p;
	node->size = size;
	node->count = amount;
	node->next = 0;
	if (gb->head == 0)
	{
		gb->head = node;
		gb->tail = node;
	}
	else
	{
		gb->tail->next = node;
		gb->tail = node;
	}
	gb->size += 1;
}
