/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libalbaud.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:35:27 by albaud            #+#    #+#             */
/*   Updated: 2023/10/23 20:58:10 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBALBAUD_H
# define LIBALBAUD_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <fcntl.h>
# include <unistd.h>
# include <math.h>


# define DEBUG 1

# include "trashcan/trashcan.h"
# include "va_args/va_args.h"
# include "array/t_arr.h"
# include "array/array.h"
# include "string/mstring.h"
# include "string/string.h"
# include "map/t_map.h"
# include "map/map.h"
# include "random/random.h"
# include "file/file.h"
# include "input/input.h"
# if __has_include("p/p.h") && __has_include(<stdint.h>)
#  include "p/p.h"
# endif
# if __has_include("vlib/vlib.h") && __has_include(<stdint.h>)
#  include "vlib/vlib.h"
# endif
# if __has_include("mlib/mlib.h") && __has_include(<stdint.h>)
#  include "mlib/mlib.h"
# endif
# if __has_include("mlx/minilibx.h") && __has_include(<stdint.h>)
#  include "mlx/minilibx.h"
# endif
# if __has_include("libia/libia.h") && __has_include(<stdint.h>)
#  include "libia/libia.h"
# endif

void	input_box(void *arg, char *text, int options, char **lines, void (**f)());

#endif

