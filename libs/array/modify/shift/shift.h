/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIFT_H
# define SHIFT_H

# include "../modify.h"

void	shift_all_right(t_arr *arr, size_t shift);
void	shift_all_left(t_arr *arr, size_t shift);
void	shift_right(t_arr *arr, size_t shift, size_t start, size_t end);
void	shift_left(t_arr *arr, size_t shift, size_t start, size_t end);

#endif