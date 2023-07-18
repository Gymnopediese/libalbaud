/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readlines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:24:11 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:39:01 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

t_arr	readlines(char *filename)
{
	t_str	str;

	str = readfile(filename);
	return (split(&str, "\n", 1));
}

t_arr	readfdlines(int fd)
{
	t_str	str;

	str = readfd(fd);
	return (split(&str, "\n", 1));
}
