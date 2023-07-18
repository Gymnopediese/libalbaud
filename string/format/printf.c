/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:51:02 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 15:36:15 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

size_t	print(char *to_format, ...)
{
	va_list	l;
	t_str	res;

	va_start(l, to_format);
	res = formatage(to_format, &l);
	write(1, res.arr, res.size);
	write(1, PRINTEND, 1);
	delete(res.arr);
	return (res.size);
}

size_t	printfd(int fd, char *to_format, ...)
{
	va_list	l;
	t_str	res;

	va_start(l, to_format);
	res = formatage(to_format, &l);
	write(fd, res.arr, res.size);
	delete(res.arr);
	return (res.size);
}

size_t	printfile(char *file, char *to_format, ...)
{
	va_list	l;
	t_str	res;
	int		fd;

	va_start(l, to_format);
	res = formatage(to_format, &l);
	fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
		error("printfile: invalid file");
	write(fd, res.arr, res.size);
	delete(res.arr);
	close(fd);
	return (res.size);
}
