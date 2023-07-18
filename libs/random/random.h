/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:30:19 by albaud            #+#    #+#             */
/*   Updated: 2023/07/16 21:08:44 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_H
# define RANDOM_H

# include <time.h>
# include "../trashcan/trashcan.h"


long long	randint(long long min, long long max);
double		randdouble(double min, double max);
#endif