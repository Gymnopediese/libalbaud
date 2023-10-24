/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:21:51 by albaud            #+#    #+#             */
/*   Updated: 2023/10/24 02:14:21 by albaud           ###   ########.fr       */
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
		append(&res, s(v));
	}
	return (res);
}

t_str	readlinefd(int fd)
{
	ssize_t	temp;
	t_str	res;
	char	buffer[1000001];

	res = str("");
	temp = 1;
	while (temp)
	{
		temp = read(fd, buffer, 1000000);
		if (temp == -1)
			error("cannot read fd");
		buffer[temp] = 0;
		append(&res, s(buffer));
		if (indexof(&res, v("\n")) != (size_t)-1)
		{
			res.chars[res.len - 1] = 0;
			break ;
		}
	}
	return (res);
}

t_str	input(char *prompt)
{
	printnoline(prompt);
	return (readlinefd(0));
}
