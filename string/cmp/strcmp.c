/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 00:25:00 by albaud            #+#    #+#             */
/*   Updated: 2023/07/16 14:30:40 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

int	scmp(char *a, char *b)
{
	while (*a && *b && *a == *b && a++ && b++)
		;
	return (*a - *b);
}

int	scmpn(char *a, char *b, size_t size)
{
	while (*a && *b && *a == *b && a++ && b++ && --size)
		;
	return ((size != 0) * (*a - *b));
}

int	scmpf(char *a, char *b)
{
	while (*a && *b && *a == *b && a++ && b++)
		;
	return ((*b != 0) * (*a - *b));
}

int	nocasecmp(char *a, char *b)
{
	while (*a && *b && ctolower(*a) == ctolower(*b) && a++ && b++)
		;
	return (*a - *b);
}

int	nocasencmp(char *a, char *b, size_t size)
{
	while (*a && *b && ctolower(*a) == ctolower(*b) && a++ && b++ && --size)
		;
	return ((size != 0) * (*a - *b));
}

int	nocasefcmp(char *a, char *b)
{
	while (*a && *b && *a == *b && a++ && b++)
		;
	return ((*b != 0) * (*a - *b));
}
