/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVE_H
# define MOVE_H

# include "../modify.h"

void	mymemcpy(char *a, char *b, int n);
void	move_all_right(t_arr *arr, size_t move);
void	move_all_left(t_arr *arr, size_t move);
void	move_right(t_arr *arr, size_t move, size_t start, size_t end);
void	move_left(t_arr *arr, size_t move, size_t start, size_t end);

#endif