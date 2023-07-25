/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexto.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INDEXTO_H
# define INDEXTO_H

# include "../search.h"

size_t	nindexto(t_arr *arr, ssize_t index, size_t end, t_elem elem);
size_t	indexto(t_arr *arr, size_t end, t_elem elem);
size_t	nrindexto(t_arr *arr, ssize_t index, size_t end, t_elem elem);
size_t	rindexto(t_arr *arr, size_t end, t_elem elem);
size_t	findexto(t_arr *arr, size_t end, int (*condition)(), ...);
size_t	fnindexto(t_arr *arr, size_t n, size_t end, int (*condition)(), ...);
size_t	fnrindexto(t_arr *arr, size_t n, size_t end, int (*condition)(), ...);
size_t	frindexto(t_arr *arr, size_t end, int (*condition)(), ...);

#endif