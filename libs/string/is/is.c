/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:33:25 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 12:49:22 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is.h"

int	sisalnum(t_str *str)
{
	return (are_all(str, cisalnum));
}

int	sisassci(t_str *str)
{
	return (are_all(str, cisascii));
}

int	sisdigit(t_str *str)
{
	return (are_all(str, cisdigit));
}

int	sisidentifier(t_str *str)
{
	return (are_all(str, cisidentifier));
}

int	sisprintable(t_str *str)
{
	return (are_all(str, cisprintable));
}

int	sisspace(t_str *str)
{
	return (are_all(str, cisspace));
}

int	sisupper(t_str *str)
{
	return (are_all(str, cisupper));
}

int	sislower(t_str *str)
{
	return (are_all(str, cislower));
}

// isalpha()	Returns True if all characters in the string are in the alphabet
// isascii()	Returns True if all characters in the string are ascii characters
// isdecimal()	Returns True if all characters in the string are decimals
// isdigit()	Returns True if all characters in the string are digits
// isidentifier()	Returns True if the string is an identifier
// islower()	Returns True if all characters in the string are lower case
// isnumeric()	Returns True if all characters in the string are numeric
// isprintable()	Returns True if all characters in the string are printable
// isspace()	Returns True if all characters in the string are whitespaces
// istitle()	Returns True if the string follows the rules of a title
// isupper()