/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:19:44 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:28:05 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

t_str	readfile(char *filename)
{
	ssize_t	len;
	t_str	res;
	int		fd;

	len = filesize(filename);
	if (len == -1)
		error("cannot open file");
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		error("cannot open file");
	res = array(len, 1);
	if (read(fd, res.c_str, len) == -1)
		error("cannot read file");
	res.len = len;
	return (res);
}
