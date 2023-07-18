/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:35:31 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:39:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <stdarg.h>
# include <fcntl.h>
# include <unistd.h>

# include "../string/string.h"

ssize_t	filesize(char *filename);
t_str	readfile(char *filename);
t_str	readfd(int fd);
t_arr	readfdlines(int fd);
t_arr	readlines(char *filename);
#endif



