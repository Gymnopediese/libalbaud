/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOD_H
# define MOD_H

# include "../string.h"

t_arr	splitlines(t_arr *arr);
void	expendtabsn(t_arr *arr, size_t n);
void	expendtabs(t_arr *arr);
void	upper(t_str *str);
void	lower(t_str *str);
void	capitalize(t_str *str);
void	title(t_str *str);
void	swapcase(t_str *str);

#endif