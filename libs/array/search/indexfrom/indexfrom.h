/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexfrom.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INDEXFROM_H
# define INDEXFROM_H

# include "../search.h"

size_t	nindexfrom(t_arr *arr, ssize_t index, size_t start, t_elem elem);
size_t	indexfrom(t_arr *arr, size_t start, t_elem elem);
size_t	nrindexfrom(t_arr *arr, ssize_t index, size_t start, t_elem elem);
size_t	rindexfrom(t_arr *arr, size_t start, t_elem elem);
size_t	findexfrom(t_arr *arr, size_t start, int (*condition)(), ...);
size_t	fnindexfrom(t_arr *arr, size_t n, size_t start, int (*condition)(), ...);
size_t	fnrindexfrom(t_arr *arr, size_t n, size_t start, int (*condition)(), ...);
size_t	frindexfrom(t_arr *arr, size_t start, int (*condition)(), ...);

#endif