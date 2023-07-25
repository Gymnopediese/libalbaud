/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMP_H
# define CMP_H

# include "../string.h"

int	scmp(char *a, char *b);
int	scmpn(char *a, char *b, size_t size);
int	scmpf(char *a, char *b);
int	nocasecmp(char *a, char *b);
int	nocasencmp(char *a, char *b, size_t size);
int	nocasefcmp(char *a, char *b);

#endif