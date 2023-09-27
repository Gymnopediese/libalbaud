/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomarr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOMARR_H
# define RANDOMARR_H

# include "../array.h"

void		shuffle(t_arr *arr);
t_arr		rrangei(int a, int b);
t_arr		rrangeli(long int a, long int b);
t_arr		rrangelli(long long a, long long b);
t_arr		rranged(long a, long b);
t_arr		rrangef(long a, long b);
t_pointer	pickrandom(t_arr *arr);

#endif