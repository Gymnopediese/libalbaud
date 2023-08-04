/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/28 03:11:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINMAX_H
# define MINMAX_H

# include "../get.h"

t_pointer	fmaxfound(t_arr *arr, int (*cmp)(), ...);
t_pointer	maxfound(t_arr *arr);
size_t	fmaxindex(t_arr *arr, int (*cmp)(), ...);
size_t	maxindex(t_arr *arr, int (*cmp)(), ...);
// t_pointer	fminfound(t_arr *arr, int (*cmp)(), ...);
t_pointer	minfound(t_arr *arr);

ssize_t	minarr(t_arr *arr, ssize_t (*min)(), ...);
ssize_t	maxarr(t_arr *arr, ssize_t (*min)(), ...);
ssize_t	fminarr(t_arr *arr, ssize_t (*min)(), ...);
ssize_t	fminindex(t_arr *arr, ssize_t (*min)(), ...);
t_pointer	fminfound(t_arr *arr, ssize_t (*min)(), ...);
#endif