/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "../array.h"

t_arr	array(size_t len, size_t elem_size);
t_arr	l_array(size_t elme_size, void *e, size_t len);
t_arr	n_array(size_t elme_size, size_t len, ...);
t_arr	e_array(size_t elem_size, ...);
t_arr	s_array(char *str);
t_arr	v_array(size_t elem_size, void *elem);
t_arr	a_array(t_arr *cpy);
t_arr	copy(t_arr	*cpy);
t_arr	*tarray(size_t elme_size, t_elem e);
t_arr	*tarrays(char *str);
t_arr	*torray(size_t elme_size, t_elem e);
t_arr	*torrays(char *str);
void	arrealloc(t_arr	*res, ssize_t size);
t_arr	l_orray(size_t elme_size, void *e, size_t len);
t_arr	s_orray(char *str);

#endif