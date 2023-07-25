/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_H
# define FORMAT_H

# include "../string.h"

size_t	print(char *to_format, ...);
size_t	printfd(int fd, char *to_format, ...);
size_t	printfile(char *file, char *to_format, ...);
void	table(t_arr *res, t_format *form, size_t dimention);
t_str	oformat(char *to_format, ...);
size_t	dimlen(char *type, void **data, t_format *form, int dimention);
size_t	dimlenarr(void **data, t_format *form, int dimention);
t_str	multidimention(char *type, void **data, t_format *form, int dimention);
size_t	memlen(void **data);
void	arguments(t_arr *content, va_list *l, t_str *res);
t_str	formatage(char *to_format, va_list *l);
t_str	format(char *to_format, ...);
t_pad	getpadding(char *str, int n);
void	apply(t_str *str, t_format *format);
t_str	pointerstr(void *p);
t_str	va_strf(char *type, va_list *l, t_format *format);
t_str	va_str(char *type, va_list *l);
t_str	typetostr(char *type, t_pointer pointer, size_t i, t_format *format);
void	format_arg(t_format *format, char *arg);
int	dimensions(t_arr *arr);
t_str	multidimarr(char *type, t_arr *arr, t_format *form);
t_str	multidimarrr(char *type, t_arr *arr, t_format *form, int dimention);

#endif