/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   follow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:47:06 by albaud            #+#    #+#             */
/*   Updated: 2023/07/27 15:17:22 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extract.h"

// int	follow(char *to_extract, char *pattern, size_t len)
// {
// 	t_str	res;
// 	size_t	i;
// 	size_t	j;
// 	t_str	ext;

// 	ext = str(to_extract);
// 	res.arr = new(1, len);
// 	res.size = 0;
// 	i = 0;
// 	j = 0;
// 	while (1)
// 	{
// 		while (pattern[i] && pattern[i] == to_extract[j] && pattern[i++] != '%')
// 			j++;
// 		if (pattern[i] == 0)
// 			return (1);
// 		if (pattern[i] != '%')
// 			return (0);
// 		i++;
// 		if (pattern[i] == 's')
// 			j += extract_str(&res, &ext, &pattern[i], j);
// 		else if (pattern[i] == 'i')
// 			j += extract_int(&res, &ext, j);
// 		else if (pattern[i] == 'f')
// 			j += extract_double(&res, &ext, j);
// 		else
// 			return (0);
// 		i++;
// 	}
// }
