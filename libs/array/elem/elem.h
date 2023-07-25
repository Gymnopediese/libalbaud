/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEM_H
# define ELEM_H

# include "../array.h"

t_elem	s(char *string);
t_elem	l(void *elem, size_t len);
t_elem	v(void *elem);
t_elem	a(t_arr *arr);
t_elem	e(t_arr *arr, ...);
t_elem	sl(char *string);
t_elem	ll(void *elem, size_t len);
t_elem	vl(void *elem);
t_elem	al(t_arr *arr);
t_elem	el(size_t size, ...);

#endif