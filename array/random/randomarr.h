/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomarr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:30:19 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 00:19:44 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOMARR_H
# define RANDOMARR_H

# include "../array.h"

void		shuffle(t_arr *arr);
t_pointer	pickrandom(t_arr *arr);


t_arr		rrangei(int a, int b);
t_arr		rrangeli(long int a, long int b);
t_arr		rrangelli(long long a, long long b);
t_arr		rranged(long a, long b);
t_arr		rrangef(long a, long b);

#endif