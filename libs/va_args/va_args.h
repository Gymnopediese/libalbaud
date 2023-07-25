/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_args.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:21:46 by albaud            #+#    #+#             */
/*   Updated: 2023/07/22 13:03:11 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VA_ARGS_H
# define VA_ARGS_H

# include "../trashcan/trashcan.h"

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define VA_ARG_MAX_ELEM 5

typedef void(*t_va_func)(va_list *);
typedef void(*t_va_pfunc)();

char	*va_arg_len(va_list *l, size_t len);
void	va_repeat(size_t n, t_va_func f, ...);
void	va_prepeat(size_t n, t_va_pfunc f, void *p, ...);
void	va_loop(size_t n, t_va_func f, ...);
void	va_ploop(size_t n, t_va_pfunc f, void *p, ...);

#endif