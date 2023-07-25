/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cisshit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:26:08 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:48:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	cisalnum(char *c)
{
	return (cisalpha(c) || cisdigit(c));
}

int	cisdigit(char *a)
{
	return (*a >= '0' && *a <= '9');
}

int	cisalpha(char *c)
{
	return (cisupper(c) || cislower(c));
}

int	cisascii(char *c)
{
	return (*c >= 0 && *c <= 127);
}
