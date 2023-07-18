/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:04:49 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:09:19 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_H
# define COUNT_H

# include "../../array.h"

size_t	count(t_arr *arr, ...);
size_t	countfrom(t_arr *arr, size_t s, ...);
size_t	countto(t_arr *arr, size_t e, ...);
size_t	countin(t_arr *arr, size_t s, size_t e, ...);

size_t	countf(t_arr *arr, int (*condition)());
size_t	countffrom(t_arr *arr, size_t s, int (*condition)());
size_t	countfto(t_arr *arr, size_t e, int (*condition)());
size_t	countfin(t_arr *arr, size_t s, size_t e, int (*condition)());

size_t	countv(t_arr *arr, char *target, size_t size);
size_t	countvfrom(t_arr *arr, size_t s, char *target, size_t size);
size_t	countvto(t_arr *arr, size_t e, char *target, size_t size);
size_t	countvin(t_arr *arr, size_t s, size_t e, char *target, size_t size);

size_t	counts(t_arr *arr, char *target);
size_t	countsfrom(t_arr *arr, size_t s, char *target);
size_t	countsto(t_arr *arr, size_t e, char *target);
size_t	countsin(t_arr *arr, size_t s, size_t e, char *target);


size_t	counta(t_arr *arr, t_arr *target);
size_t	countafrom(t_arr *arr, t_arr *target, size_t s);
size_t	countato(t_arr *arr, t_arr *target, size_t e);
size_t	countain(t_arr *arr, t_arr *target, size_t s, size_t e);

#endif