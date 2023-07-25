/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterators.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATORS_H
# define ITERATORS_H

# include "../get.h"

t_cpointer	cbegin(t_arr *arr);
t_cpointer	cend(t_arr *arr);
t_cpointer	cget(t_arr *arr, size_t index);
t_cpointer	cget_any(t_arr *arr, size_t index);
t_pointer	begin(t_arr *arr);
t_pointer	end(t_arr *arr);
t_pointer	getr(t_arr *arr, size_t index);
t_pointer	get(t_arr *arr, size_t index);
t_elem	gete(t_arr *arr, size_t index);
t_pointer	get_any(t_arr *arr, size_t index);

#endif