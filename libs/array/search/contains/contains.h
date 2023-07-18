/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contains.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:04:49 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:13:03 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAINS_H
# define CONTAINS_H

# include "../../array.h"

int	contains(t_arr *arr, ...);
int	containsfrom(t_arr *arr, size_t s, ...);
int	containsto(t_arr *arr, size_t e, ...);
int	containsin(t_arr *arr, size_t s, size_t e, ...);

int	containsf(t_arr *arr, int (*condition)());
int	containsffrom(t_arr *arr, size_t s, int (*condition)());
int	containsfto(t_arr *arr, size_t e, int (*condition)());
int	containsfin(t_arr *arr, size_t s, size_t e, int (*condition)());

int	containsp(t_arr *arr, void *target);
int	containspfrom(t_arr *arr, size_t s, void *target);
int	containspto(t_arr *arr, size_t e, void *target);
int	containspin(t_arr *arr, size_t s, size_t e, void *target);

int	containsv(t_arr *arr, char *target, size_t size);
int	containsvfrom(t_arr *arr, size_t s, char *target, size_t size);
int	containsvto(t_arr *arr, size_t e, char *target, size_t size);
int	containsvin(t_arr *arr, size_t s, size_t e, char *target, size_t size);

int	containss(t_arr *arr, char *target);
int	containssfrom(t_arr *arr, size_t s, char *target);
int	containssto(t_arr *arr, size_t e, char *target);
int	containssin(t_arr *arr, size_t s, size_t e, char *target);

int	containsa(t_arr *arr, t_arr *target);
int	containsafrom(t_arr *arr, t_arr *target, size_t s);
int	containsato(t_arr *arr, t_arr *target, size_t e);
int	containsain(t_arr *arr, t_arr *target, size_t s, size_t e);

#endif