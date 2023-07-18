/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 00:19:01 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 16:02:03 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_H
# define FORMAT_H

# include "../string.h"

# define MAX_DIMENSION 100
# define COLOR_SPLIT "red:black:green:yellow:blue:magenta:cyan:reset"
# define BASEN "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define PRINTEND "\n"

typedef struct s_pad
{
	size_t	pad;
	char	*motif;
	int		mode;
	int		cote;
}	t_pad;

typedef struct s_format
{
	size_t	length[MAX_DIMENSION];
	size_t	dimension;
	char	*separator;
	int		casee;
	t_str	color;
	t_pad	pading;
	int		log;
	char	precision;
	char	base;
	int		repeat;
	char	nl;
}	t_format;

void	table(t_arr *res, t_format *form, size_t dimention);
void	format_arg(t_format *format, char *arg);
t_str	multidimention(char *type, void **data, t_format *form, int dimention);
t_str	typetostr(char *type, t_pointer pointer, size_t i, t_format *format);
t_pad	getpadding(char *str, int i);
t_str	pointerstr(void *p);
t_str	va_str(char *type, va_list *l);
size_t	memlen(void **data);
size_t	print(char *to_format, ...);
size_t	printfd(int fd, char *to_format, ...);
size_t	printfile(char *file, char *to_format, ...);
t_str	formatage(char *to_format, va_list *l);
t_str	va_strf(char *type, va_list *l, t_format *format);
void	apply(t_str *str, t_format *format);
t_str	multidimarr(char *type, t_arr *arr, t_format *form);
#endif