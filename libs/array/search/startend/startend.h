/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startend.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STARTEND_H
# define STARTEND_H

# include "../search.h"

int	startwith(t_arr *arr, t_elem elem);
int	endwith(t_arr *arr, t_elem elem);

#endif