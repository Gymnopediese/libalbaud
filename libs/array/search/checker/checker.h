/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../search.h"

int	are_all(t_arr *arr, int (*func)());
int	are_not(t_arr *arr, int (*func)());
int	is_n(t_arr *arr, size_t n, int (*func)());
int	is_only_n(t_arr *arr, size_t n, int (*func)());
int	is_any(t_arr *arr, int (*func)());

#endif