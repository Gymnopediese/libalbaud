/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expend.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:54:56 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 11:00:41 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPEND_H
# define EXPEND_H

# include "../array.h"

void	extend(t_arr *left, t_arr *right);
void	extendv(t_arr *left, char *right, size_t len);
void	extends(t_arr *left, char *right);
void	extend_front(t_arr *left, char *right, size_t len);
void	extend_fronts(t_arr *left, char *right);

void	push(t_arr *arr, ...);
void	pushv(t_arr *arr, char *elem);
void	pushn(t_arr *arr, size_t n, ...);

void	push_front(t_arr *arr, ...);
void	push_frontv(t_arr *arr, char *elem);
void	push_frontn(t_arr *arr, size_t n, ...);

void	insert(t_arr *arr, size_t index, ...);
void	insertn(t_arr *arr, size_t index, size_t n, ...);
void	inserta(t_arr *arr, t_arr *add, size_t index);
void	insertv(t_arr *arr, size_t index, char *add, size_t len);
void	inserts(t_arr *arr, size_t index, char *add);

void	fill(t_arr *arr, size_t index, size_t ammount, ...);
void	fillv(t_arr *arr, size_t index, size_t ammount, char *elem);
void	fill_to(t_arr *arr, size_t index, size_t size, ...);
void	fill_tov(t_arr *arr, size_t index, size_t size, char *elem);

void	fill_front(t_arr *arr, size_t ammount, ...);
void	fill_frontv(t_arr *arr, size_t ammount, char *elem);
void	fill_to_front(t_arr *arr, size_t size, ...);
void	fill_to_frontv(t_arr *arr, size_t size, char *elem);

void	fill_back(t_arr *arr, size_t ammount, ...);
void	fill_backv(t_arr *arr, size_t ammount, char *elem);
void	fill_to_back(t_arr *arr, size_t size, ...);
void	fill_to_backv(t_arr *arr, size_t size, char *elem);

void	replace_at(t_arr *arr, size_t index, ...);
void	replace_atv(t_arr *arr, size_t index, char *elem);
void	replace(t_arr *arr, ...);
void	replacev(t_arr *arr, char *a, char *b);

void	insert_on_at(t_arr *arr, size_t index, size_t rlen, t_arr *ins);
void	insert_on_atv(t_arr *arr, size_t index, size_t rlen,
			char *elem, size_t len);
void	insert_on_ats(t_arr *arr, size_t index, size_t rlen, char *ins);
void	insert_on(t_arr *arr, char *elem, t_arr *ins);
void	insert_onv(t_arr *arr, char *tofind, char *elem, size_t len);

void	overide(t_arr *arr, size_t index, t_arr *over);
void	overidev(t_arr *arr, size_t index, char *elem, size_t len);

void	center(t_arr *arr, size_t size, ...);
void	centerv(t_arr *arr, size_t size, char *elem);

#endif
