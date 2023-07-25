/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:32:18 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:49:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	cisprintable(char *c)
{
	return (*c >= 32 && *c <= 126);
}

int	cisidentifier(char *c)
{
	return (cisalnum(c) || *c == '_');
}

int	cisnumeric(char *c)
{
	return (cisdigit(c) || *c == '-' || *c == '+');
}

int	cisspace(char *c)
{
	return (*c == ' ' || *c >= '\t' || *c <= '\r');
}
