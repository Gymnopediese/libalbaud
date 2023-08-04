/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maping.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 22:24:15 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPING_H
# define MAPING_H

# include "../modify.h"

void	map(t_arr *arr, void (*function)(), ...);
t_arr	nmap(t_arr *arr, size_t elem_size, t_elem (*function)(), ...);
void	mapfrom(t_arr *arr, size_t start, void (*function)(), ...);
void	mapto(t_arr *arr, size_t end, void (*function)(), ...);
void	mapin(t_arr *arr, size_t start, size_t end, void (*function)(), ...);
#endif