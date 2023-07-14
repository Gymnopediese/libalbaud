/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:30:29 by albaud            #+#    #+#             */
/*   Updated: 2023/07/09 19:36:57 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDUCE_H
# define REDUCE_H

# include "../array.h"

void	unique(t_arr *arr);
void	uniquen(t_arr *arr, size_t n);

int		erase(t_arr *arr, ...);
int		erasev(t_arr *arr, char *elem);
void	erasen(t_arr *arr, size_t n, ...);
void	remove_at(t_arr *arr, size_t ind);
void	remove_atn(t_arr *arr, size_t ind, size_t n);

void	*pop(t_arr *arr);
void	*pop_at(t_arr *arr, size_t ind);
void	*pop_front(t_arr *arr);

void	clear(t_arr *arr);
void	clear_excess(t_arr *arr);

t_arr	partition(t_arr *arr, int (*condition)());

void	*memdup(void *src, size_t size);

int		remove_if(t_arr *arr, int (*condition)());
int		remove_iff(t_arr *arr, void *cmp, int (*condition)());
void	remove_ifn(t_arr *arr, size_t n, int (*condition)());
void	remove_iffn(t_arr *arr, size_t n, void *cmp, int (*condition)());

void	remove_content(t_arr *arr, size_t startt, size_t n, char *start, size_t endd,char *end);


void	replace_content(t_arr *arr, size_t s_rep, char *rep, size_t startt, char *start, size_t endd,char *end);
void	replace_contents(t_arr *arr, char *rep, char *start, char *end);

#endif
