/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexin.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INDEXIN_H
# define INDEXIN_H

# include "../search.h"

size_t	findexin(t_arr *arr, size_t start, size_t end, int (*condition)(), ...);
size_t	fnindexin(t_arr *arr, size_t n, size_t start, size_t end, int (*condition)(), ...);
size_t	fnrindexin(t_arr *arr, size_t n, size_t start, size_t end, int (*condition)(), ...);
size_t	frindexin(t_arr *arr, size_t start, size_t end, int (*condition)(), ...);
size_t	nindexin(t_arr *arr, ssize_t index, size_t start, size_t end, t_elem elem);
size_t	indexin(t_arr *arr, size_t start, size_t end, t_elem elem);
size_t	nrindexin(t_arr *arr, ssize_t index, size_t start, size_t end, t_elem elem);
size_t	rindexin(t_arr *arr, size_t start, size_t end, t_elem elem);

#endif