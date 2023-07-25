/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ito.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITO_H
# define ITO_H

# include "../string.h"

int	len(long long nb);
t_str	itoa(long long int nb);
int	ft_nlen(long nb, int n);
t_str	itobn(long long nb, char *base, size_t len);
t_str	itob(long long nb, char *base);
t_str	itod(double nb, size_t p);
t_str	itod6(double nb);

#endif