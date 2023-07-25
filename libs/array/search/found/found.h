/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOUND_H
# define FOUND_H

# include "../search.h"

t_pointer	ffound(t_arr *arr, int (*condition)(), ...);
t_pointer	fnfound(t_arr *arr, size_t n, int (*condition)(), ...);
t_pointer	fnrfound(t_arr *arr, size_t n, int (*condition)(), ...);
t_pointer	frfound(t_arr *arr, int (*condition)(), ...);
t_pointer	nfound(t_arr *arr, ssize_t found, t_elem elem);
t_pointer	found(t_arr *arr, t_elem elem);
t_pointer	nrfound(t_arr *arr, ssize_t found, t_elem elem);
t_pointer	rfound(t_arr *arr, t_elem elem);

#endif