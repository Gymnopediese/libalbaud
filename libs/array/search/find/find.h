/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:04:49 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:06:33 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_H
# define FIND_H

# include "../../array.h"

void	*find(t_arr *arr, ...);
void	*findfrom(t_arr *arr, size_t s, ...);
void	*findto(t_arr *arr, size_t e, ...);
void	*findin(t_arr *arr, size_t s, size_t e, ...);

void	*findf(t_arr *arr, int (*condition)());
void	*findffrom(t_arr *arr, size_t s, int (*condition)());
void	*findfto(t_arr *arr, size_t e, int (*condition)());
void	*findfin(t_arr *arr, size_t s, size_t e, int (*condition)());

void	*findv(t_arr *arr, char *target, size_t size);
void	*findvfrom(t_arr *arr, size_t s, char *target, size_t size);
void	*findvto(t_arr *arr, size_t e, char *target, size_t size);
void	*findvin(t_arr *arr, size_t s, size_t e, char *target, size_t size);

void	*finds(t_arr *arr, char *target);
void	*findsfrom(t_arr *arr, size_t s, char *target);
void	*findsto(t_arr *arr, size_t e, char *target);
void	*findsin(t_arr *arr, size_t s, size_t e, char *target);


void	*finda(t_arr *arr, t_arr *target);
void	*findafrom(t_arr *arr, t_arr *target, size_t s);
void	*findato(t_arr *arr, t_arr *target, size_t e);
void	*findain(t_arr *arr, t_arr *target, size_t s, size_t e);

#endif