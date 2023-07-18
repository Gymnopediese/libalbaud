/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:21:51 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:31:36 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

t_str	readfd(int fd)
{
	ssize_t	temp;
	t_str	res;
	char	v[1000001];

	res = str("");
	temp = 1;
	while (temp)
	{
		temp = read(fd, v, 1000000);
		if (temp == -1)
			error("cannot read fd");
		v[temp] = 0;
		extends(&res, v);
	}
	return (res);
}
