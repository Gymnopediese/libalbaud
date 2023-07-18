/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 00:35:57 by albaud            #+#    #+#             */
/*   Updated: 2023/07/15 17:04:02 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CMP_H
# define CMP_H

int	scmp(char *a, char *b);
int	scmpn(char *a, char *b, size_t size);
int	scmpf(char *a, char *b);
int	nocasecmp(char *a, char *b);
int	nocasencmp(char *a, char *b, size_t size);
int	nocasefcmp(char *a, char *b);
#endif