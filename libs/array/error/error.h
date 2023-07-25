/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "../array.h"

void	infos(t_arr *arr);
void	inrange(t_arr *arr, size_t *index);
void	inrangelen(t_arr *arr, size_t *index);
void	incapacity(t_arr *arr, size_t *index);
void	minmax(t_arr *arr, size_t *start, size_t *end);
void	minmaxlen(t_arr *arr, size_t *start, size_t *end);

#endif