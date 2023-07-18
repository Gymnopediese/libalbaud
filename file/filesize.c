/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:13:32 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:31:28 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

ssize_t	filesize(char *filename)
{
	int		fd;
	ssize_t	temp;
	ssize_t	len;
	char	v[1000000];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	temp = 1;
	len = 0;
	while (temp)
	{
		temp = read(fd, v, 1000000);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	close(fd);
	return (len);
}
