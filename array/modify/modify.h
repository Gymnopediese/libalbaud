/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:04:49 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 22:56:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODIFY_H
# define MODIFY_H

# include "../array.h"

void	shit_right(t_arr *arr, size_t shit, size_t start, size_t end);
void	shit_left(t_arr *arr, size_t shit, size_t start, size_t end);
void	shit_all_right(t_arr *arr, size_t shit);
void	shit_all_left(t_arr *arr, size_t shit);

void	move_right(t_arr *arr, size_t move, size_t start, size_t end);
void	move_left(t_arr *arr, size_t move, size_t start, size_t end);
void	move_all_right(t_arr *arr, size_t move);
void	move_all_left(t_arr *arr, size_t move);

void	swap_any(t_arr *arr, size_t a, size_t b);

#endif