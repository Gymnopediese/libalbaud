/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:23:43 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:05:51 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_str	str(char *c_str)
{
	return (s_array(c_str));
}

t_str	strf(char *c_str)
{
	t_str	res;

	res.size = strlen(c_str);
	res.capacity = res.size;
	res.s_arr = 1;
	res.arr = c_str;
	return (res);
}

t_str	strcolor(char *c_str)
{
	if (strcmp(c_str, "red") == 0)
		return (str(TRED));
	else if (strcmp(c_str, "green") == 0)
		return (str(TGREEN));
	else if (strcmp(c_str, "yellow") == 0)
		return (str(TYELLOW));
	else if (strcmp(c_str, "blue") == 0)
		return (str(TBLUE));
	else if (strcmp(c_str, "magenta") == 0)
		return (str(TMAGENTA));
	else if (strcmp(c_str, "cyan") == 0)
		return (str(TCYAN));
	else if (strcmp(c_str, "white") == 0)
		return (str(TWHITE));
	else if (strcmp(c_str, "reset") == 0)
		return (str(RESET));
	else
		error("invalid color");
	return (str(RESET));
}
