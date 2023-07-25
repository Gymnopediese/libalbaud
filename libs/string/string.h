/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "../libalbaud.h"
# include "cmp/cmp.h"
# include "char/char.h"
# include "ito/ito.h"
# include "is/is.h"
# include "format/format.h"
# include "extract/extract.h"
# include "mod/mod.h"

size_t	c_strlen(char *str);
t_str	str(char *c_str);
t_str	strf(char *c_str);
t_str	strcolor(char *c_str);
int	condition(t_str *s, va_list l);
int	splitcontains(char *string, char *target, char *sep);

#endif