/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexof.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:04:49 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 04:46:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INDEX_H
# define INDEX_H

# include "../../array.h"

size_t	indexof(t_arr *arr, ...);
size_t	indexoffrom(t_arr *arr, size_t s, ...);
size_t	indexofto(t_arr *arr, size_t e, ...);
size_t	indexofin(t_arr *arr, size_t s, size_t e, ...);

size_t	indexoff(t_arr *arr, int (*condition)());
size_t	indexofffrom(t_arr *arr, size_t s, int (*condition)());
size_t	indexoffto(t_arr *arr, size_t e, int (*condition)());
size_t	indexoffin(t_arr *arr, size_t s, size_t e, int (*condition)());

size_t	indexofp(t_arr *arr, void *target);
size_t	indexofpfrom(t_arr *arr, size_t s, void *target);
size_t	indexofpto(t_arr *arr, size_t e, void *target);
size_t	indexofpin(t_arr *arr, size_t s, size_t e, void *target);

size_t	indexofv(t_arr *arr, char *target, size_t size);
size_t	indexofvfrom(t_arr *arr, size_t s, char *target, size_t size);
size_t	indexofvto(t_arr *arr, size_t e, char *target, size_t size);
size_t	indexofvin(t_arr *arr, size_t s, size_t e, char *target, size_t size);

size_t	indexofs(t_arr *arr, char *target);
size_t	indexofsfrom(t_arr *arr, size_t s, char *target);
size_t	indexofsto(t_arr *arr, size_t e, char *target);
size_t	indexofsin(t_arr *arr, size_t s, size_t e, char *target);

size_t	indexofa(t_arr *arr, t_arr *target);
size_t	indexofafrom(t_arr *arr, t_arr *target, size_t s);
size_t	indexofato(t_arr *arr, t_arr *target, size_t e);
size_t	indexofain(t_arr *arr, t_arr *target, size_t s, size_t e);

size_t	indexofff(t_arr *arr, void *a, int (*condition)());
size_t	indexoffffrom(t_arr *arr, size_t s, void *a, int (*condition)());
size_t	indexofffto(t_arr *arr, size_t e, void *a, int (*condition)());
size_t	indexofffin(t_arr *arr, size_t s, size_t e, void *a, int (*condition)());

#endif