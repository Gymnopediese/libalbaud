/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimention.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:28:42 by albaud            #+#    #+#             */
/*   Updated: 2023/07/28 13:32:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIMENTION_H
# define DIMENTION_H

# include "../array.h"

t_arr	array2d(size_t x, size_t y, size_t elem_size);
t_arr	array3d(size_t x, size_t y, size_t z, size_t elem_size);

#endif