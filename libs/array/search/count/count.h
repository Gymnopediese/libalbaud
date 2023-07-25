/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_H
# define COUNT_H

# include "../search.h"

size_t	countin(t_arr *arr, size_t start, size_t end, t_elem elem);
size_t	fcountin(t_arr *arr, size_t start, size_t end, int (*condition)(), ...);
size_t	countfrom(t_arr *arr, size_t start, t_elem elem);
size_t	fcountfrom(t_arr *arr, size_t start, int (*condition)(), ...);
size_t	count(t_arr *arr, t_elem elem);
size_t	fcount(t_arr *arr, int (*condition)(), ...);
size_t	countto(t_arr *arr, size_t end, t_elem elem);
size_t	fcountto(t_arr *arr, size_t end, int (*condition)(), ...);

#endif