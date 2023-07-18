/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:30:53 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 04:22:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trashcan.h"

#include <stdio.h>

int	main(void)
{
	void	*vo;
	int		*ch;
	char	*in;
	void	*random = 0;

	printf("start test\n");
	vo = allok(10, sizeof(void *));
	in = allok(10, sizeof(int));
	ch = allok(10, sizeof(char));
	printf("deleteING POINTERS:\n");
	printf("before delete:\t%p %p %p\n", vo, ch, in);
	printf("deletek them:\t%i %i %i\n",
		deletek((void *)vo), deletek((void *)ch), deletek((void *)in));
	printf("after delete:\t%p %p %p\n", vo, ch, in);
	vo = allok(10, sizeof(void *));
	in = allok(10, sizeof(int));
	ch = allok(10, sizeof(char));
	printf("before delete:\t%p %p %p\n", vo, ch, in);
	printf("deleteko them:\t%i %i %i\n",
		deleteko((void **)&vo), deleteko((void **)&ch), deleteko((void **)&in));
	printf("after delete:\t%p %p %p\n", vo, ch, in);
	vo = allok(10, sizeof(void *));
	in = allok(10, sizeof(int));
	ch = allok(10, sizeof(char));
	printf("deleteING RANDOM (NON EMPTY GB):\n");
	printf("deletek random:\t%i %i %i\n",
		deletek((void *)random), deletek((void *)999), deletek((void *)0));
	printf("deleteko random:\t%i %i %i\n",
		deletek((void **)&random), deletek((void **)999), deletek((void **)0));
	printf("deleteko them:\t%i %i %i\n",
		deleteko((void **)&vo), deleteko((void **)&ch), deleteko((void **)&in));
	printf("deleteING RANDOM (EMPTY GB):\n");
	printf("deletek random:\t%i %i %i\n",
		deletek((void *)random), deletek((void *)999), deletek((void *)0));
	vo = allok(10, sizeof(void *));
	in = allok(10, sizeof(int));
	ch = allok(10, sizeof(char));
	printf("deleteING MIXED (EMPTY GB):\n");
	printf("deletek mixed:\t%i %i %i\n",
		deletek((void *)random), deletek((void *)vo), deletek((void *)0));
	printf("deleteko mixed:\t%i %i %i\n",
		deleteko((void **)&ch), deleteko((void **)0), deleteko((void **)&in));
}
