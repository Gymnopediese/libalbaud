/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readlines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:24:11 by albaud            #+#    #+#             */
/*   Updated: 2023/10/04 09:47:38 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

t_str	readlines(char *filename)
{
	t_str	str;

	str = readfile(filename);
	return (split(&str, s("\n")));
}

t_str	readfdlines(int fd)
{
	t_str	str;

	str = readfd(fd);
	return (split(&str, s("\n")));
}
