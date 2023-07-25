/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersect.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERSECT_H
# define INTERSECT_H

# include "../array.h"

t_arr	intersect(t_arr *a, t_arr *b, int (*opp)(int, int));
t_arr	intersectf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int));
int	has_intersection(t_arr *a, t_arr *b, int (*opp)(int, int));
int	has_intersectionf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int));
int	and_opp(int a, int b);
int	nand_opp(int a, int b);
int	nor_opp(int a, int b);
int	or_opp(int a, int b);
int	xor_opp(int a, int b);

#endif