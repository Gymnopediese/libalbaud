/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POP_H
# define POP_H

# include "../reduce.h"

void	*memdup(void *src, size_t size);
void	*pop(t_arr *arr, size_t ind);
void	*popfront(t_arr *arr);
void	*popback(t_arr *arr);
void	*pople(t_arr *arr, size_t ind, size_t len);
void	*poplefront(t_arr *arr, size_t len);
void	*popleback(t_arr *arr, size_t len);

#endif