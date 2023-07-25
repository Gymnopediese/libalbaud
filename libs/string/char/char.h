/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H

# include "../string.h"

int	cisalnum(char *c);
int	cisdigit(char *a);
int	cisalpha(char *c);
int	cisascii(char *c);
int	cisupper(char *a);
int	cislower(char *a);
int	ctoupper(char a);
int	ctolower(char a);
int	cisprintable(char *c);
int	cisidentifier(char *c);
int	cisnumeric(char *c);
int	cisspace(char *c);

#endif