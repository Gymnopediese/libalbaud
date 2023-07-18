/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:08:27 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 13:40:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "../array.h"

void	inrange(t_arr *arr, size_t *index);
void	incapacity(t_arr *arr, size_t *index);
void	minmax(t_arr *arr, size_t *start, size_t *end);
void	infos(t_arr *arr);

#endif
