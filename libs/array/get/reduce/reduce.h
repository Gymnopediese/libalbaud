/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REDUCE_H
# define REDUCE_H

# include "../get.h"

ssize_t	llreduce(t_arr *arr, void (*f)(), ...);
double	dreduce(t_arr *arr, void (*f)(), ...);
t_arr	areduce(t_arr *arr, void (*f)(), ...);

#endif