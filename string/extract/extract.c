/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:07:39 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 13:46:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../string.h"

// size_t	extract_len(char *to_extract, char *pattern, size_t len)
// {
// 	size_t	res;
// 	size_t	i;

// 	i = -1;
// 	res = 0;

// }

size_t	extract_str(t_str *res, t_str *to_extract, char *pattern, size_t j)
{
	t_str	sub;
	size_t	index;

	if (pattern[1] == 0)
		index = to_extract->size;
	else
		index = indexoffrom(to_extract, j, pattern[1]);
	if (index == (size_t)-1)
		error("extract: non matching pattern");
	sub = subarr(to_extract, j, index - 1);
	memcpy(&res->arr[res->size], &sub.arr, 8);
	res->size += 8;
	return (index - j);
}

size_t	extract_int(t_str *res, t_str *to_extract, size_t j)
{
	int		sub;
	size_t	index;

	sub = atoi(&to_extract->arr[j]);
	index = 0;
	while (cisnumeric(&to_extract->arr[j]) && j++)
		index++;
	memcpy(&res->arr[res->size], &sub, 4);
	res->size += 4;
	return (index);
}

size_t	extract_double(t_str *res, t_str *to_extract, size_t j)
{
	double		sub;
	size_t		index;

	sub = atof(&to_extract->arr[j]);
	index = 0;
	while (cisnumeric(&to_extract->arr[j]) && j++)
		index++;
	if (to_extract->arr[j] == '.' && j++ && index++)
		while (cisnumeric(&to_extract->arr[j]) && j++)
			index++;
	memcpy(&res->arr[res->size], &sub, 8);
	res->size += 8;
	return (index);
}

// "  abc:abc"  " a%s:%s" -> bc, abc
void	*extract(char *to_extract, char *pattern, size_t len)
{
	t_str	res;
	size_t	i;
	size_t	j;
	t_str	ext;

	ext = str(to_extract);
	res.arr = new(1, len);
	res.size = 0;
	i = 0;
	j = 0;
	while (1)
	{
		while (pattern[i] && pattern[i] == to_extract[j] && pattern[i++] != '%')
			j++;
		if (pattern[i] == 0)
			return (res.arr);
		if (pattern[i] != '%')
			error("extract: non matching pattern");
		i++;
		if (pattern[i] == 's')
			j += extract_str(&res, &ext, &pattern[i], j);
		else if (pattern[i] == 'i')
			j += extract_int(&res, &ext, j);
		else if (pattern[i] == 'f')
			j += extract_double(&res, &ext, j);
		else
			error("extract: invalid character");
		i++;
	}
}
