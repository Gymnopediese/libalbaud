/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_H
# define IS_H

# include "../string.h"

int	sisalnum(t_str *str);
int	sisassci(t_str *str);
int	sisdigit(t_str *str);
int	sisidentifier(t_str *str);
int	sisprintable(t_str *str);
int	sisspace(t_str *str);
int	sisupper(t_str *str);
int	sislower(t_str *str);

#endif