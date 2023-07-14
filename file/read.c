/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:19:44 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:46:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

char	*readfile(char *filename)
{
	ssize_t	len;
	char	*res;
	int		fd;

	len = filesize(filename);
	if (len == -1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	res = new(len + 1, 1);
	if (read(fd, res, len) == -1)
		return (0);
	return (res);
}
