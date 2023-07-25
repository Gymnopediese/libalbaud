/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REMOVE_H
# define REMOVE_H

# include "../reduce.h"

void	remove_content(t_arr *arr, size_t n, t_elem start, t_elem end);
void	replace_content(t_arr *arr, t_elem new, t_elem start, t_elem end);
size_t	erasen(t_arr *arr, size_t ammount, t_elem elem);

#endif