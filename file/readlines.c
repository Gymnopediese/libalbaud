/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readlines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:24:11 by albaud            #+#    #+#             */
/*   Updated: 2023/07/03 12:31:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

char	*readlines(char *filename)
{
	char	**res;
	char	*temp;
	int		fd;
	size_t	i;
	size_t	c;

	temp = readfile(filename);
	if (temp == 0)
		return (0);
	return (0);
}
