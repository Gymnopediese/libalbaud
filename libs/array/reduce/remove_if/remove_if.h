/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_if.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REMOVE_IF_H
# define REMOVE_IF_H

# include "../reduce.h"

void	if_not(void);
int	remove_if(t_arr *arr, int (*condition)(), ...);
void	nremove_if(t_arr *arr, size_t n, int (*condition)(), ...);

#endif