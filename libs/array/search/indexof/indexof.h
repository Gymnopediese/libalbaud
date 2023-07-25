/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexof.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INDEXOF_H
# define INDEXOF_H

# include "../search.h"

size_t	findexof(t_arr *arr, int (*condition)(), ...);
size_t	fnindexof(t_arr *arr, size_t n, int (*condition)(), ...);
size_t	fnrindexof(t_arr *arr, size_t n, int (*condition)(), ...);
size_t	frindexof(t_arr *arr, int (*condition)(), ...);
size_t	nindexof(t_arr *arr, ssize_t indexof, t_elem elem);
size_t	indexof(t_arr *arr, t_elem elem);
size_t	nrindexof(t_arr *arr, ssize_t indexof, t_elem elem);
size_t	rindexof(t_arr *arr, t_elem elem);

#endif