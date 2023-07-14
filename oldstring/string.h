/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:35:31 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 00:11:30 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_str
{
	char	*chars;
	size_t	length;
	size_t	capacity;
}	t_str;

void	cswap(char *a, char *b);
int		cisupper(char a);
int		cislower(char a);
int		cisnumeric(char a);
int		ctoupper(char a);
int		ctolower(char a);
size_t	c_strlen(char *str);

t_str	*str(char *c_str);

t_str	*strl(char *c_str, size_t len);

t_str	*rstrl(t_str *str, size_t len);

void	center(t_str *str, size_t len, char pattern);

int		startwith(t_str *str, char *target);
int		endwith(t_str *str, char *target);
void	zfill(t_str *str, size_t len);
// casefold()	Converts string into lower case useless
// count()	Returns the number of times a specified value occurs in a string
// encode()	Returns an encoded version of the string
// endswith()	Returns true if the string ends with the specified value
// expandtabs()	Sets the tab size of the string
// find()	Searches the string for a specified value and returns the position of where it was found
// format()	Formats specified values in a string
// format_map()	Formats specified values in a string
// index()	Searches the string for a specified value and returns the position of where it was found
// join()	Converts the elements of an iterable into a string
// ljust()	Returns a left justified version of the string
// lower()	Converts a string into lower case
// lstrip()	Returns a left trim version of the string
// maketrans()	Returns a translation table to be used in translations
// partition()	Returns a tuple where the string is parted into three parts
// replace()	Returns a string where a specified value is replaced with a specified value
// rfind()	Searches the string for a specified value and returns the last position of where it was found
// rindex()	Searches the string for a specified value and returns the last position of where it was found
// rjust()	Returns a right justified version of the string
// rpartition()	Returns a tuple where the string is parted into three parts
// rsplit()	Splits the string at the specified separator, and returns a list
// rstrip()	Returns a right trim version of the string
// split()	Splits the string at the specified separator, and returns a list
// splitlines()	Splits the string at line breaks and returns a list
// strip()	Returns a trimmed version of the string
// swapcase()	Swaps cases, lower case becomes upper case and vice versa
// title()	Converts the first character of each word to upper case
// translate()	Returns a translated string
// zfill()	Fills the string with a specified number of 0 values at the beginning


// startswith()	Returns true if the string starts with the specified value

#endif





// isalnum()	Returns True if all characters in the string are alphanumeric
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
// isupper()	Returns True if all characters in the string are upper case