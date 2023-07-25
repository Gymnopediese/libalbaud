/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:09:26 by albaud            #+#    #+#             */
/*   Updated: 2023/07/24 17:11:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSTRING_H
# define MSTRING_H

# define DIGITS "0123456789"
# define LOWERCASE_ALPHABETS "abcdefghijklmnopqrstuvwxyz"
# define UPPERCASE_ALPHABETS "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define LETTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define HEXADECIMAL_UPPER "0123456789ABCDEF"
# define HEXADECIMAL_LOWER "0123456789abcdef"
# define OCTAL "01234567"
# define BINARY "01"
# define PRINTABLE_ASCII "!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"
# define PUNCTUATION_MARKS "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"
# define WHITESPACE " \t\n\v\f\r"
# define CONTROL_CHARACTERS "\a\b\f\n\r\t\v"
# define ALPHANUMERIC "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
# define ALPHANUMERIC_PUNCTUATION "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"

# define MAX_DIMENSION 100
# define COLOR_SPLIT "red:black:green:yellow:blue:magenta:cyan:reset"
# define BASEN "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define PRINTEND "\n"

typedef struct s_pad
{
	size_t	pad;
	char	*motif;
	int		mode;
	int		cote;
}	t_pad;

typedef struct s_format
{
	size_t	length[MAX_DIMENSION];
	size_t	dimension;
	char	*separator;
	int		casee;
	t_str	color;
	t_pad	pading;
	int		log;
	char	precision;
	char	base;
	int		repeat;
	char	nl;
}	t_format;

#endif
