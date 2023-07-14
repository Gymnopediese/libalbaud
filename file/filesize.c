/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:13:32 by albaud            #+#    #+#             */
/*   Updated: 2023/07/03 12:22:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

ssize_t	filesize(char *filename)
{
	int		fd;
	ssize_t	temp;
	ssize_t	len;
	char	v[100000];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	temp = 1;
	while (temp)
	{
		temp = read(fd, v, 100000);
		if (read == -1)
			return (-1);
		len += temp;
	}
	close(fd);
	return (len);
}
