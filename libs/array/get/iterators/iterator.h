/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:50:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/22 16:35:17 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_H
# define ITERATOR_H

# include "../../array.h"

t_pointer		begin(t_arr *arr);
t_pointer		end(t_arr *arr);
t_pointer		get(t_arr *arr, size_t index);
t_pointer		getr(t_arr *arr, size_t index);
t_pointer		get_any(t_arr *arr, size_t index);

t_cpointer		cbegin(t_arr *arr);
t_cpointer		cend(t_arr *arr);
t_cpointer		cget(t_arr *arr, size_t index);
t_cpointer		cget_any(t_arr *arr, size_t index);

#endif