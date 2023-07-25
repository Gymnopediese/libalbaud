/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANGE_H
# define RANGE_H

# include "../array.h"

t_arr	rangei(int a, int b);
t_arr	rangeli(long int a, long int b);
t_arr	rangelli(long long a, long long b);
t_arr	ranged(long a, long b);
t_arr	rangef(long a, long b);

#endif