/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:21:22 by albaud            #+#    #+#             */
/*   Updated: 2023/07/16 21:39:35 by albaud           ###   ########.fr       */
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