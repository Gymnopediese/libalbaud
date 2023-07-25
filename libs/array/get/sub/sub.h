/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUB_H
# define SUB_H

# include "../get.h"

t_arr	subarr(t_arr *arr, size_t s, size_t e);
t_arr	subright(t_arr *arr, size_t s);
t_arr	subleft(t_arr *arr, size_t e);
t_arr	subcontent(t_arr *arr, t_elem start, t_elem end);

#endif