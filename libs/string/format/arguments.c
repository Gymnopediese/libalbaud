/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:31:11 by albaud            #+#    #+#             */
/*   Updated: 2023/07/16 18:11:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format.h"

void	format_arg(t_format *format, char *arg)
{
	if (nocasefcmp(arg, "low") == 0)
		format->casee = -1;
	else if (nocasefcmp(arg, "log") == 0)
		format->log = 1;
	else if (nocasefcmp(arg, "len") == 0)
		format->dimension++;
	else if (nocasefcmp(arg, "pl") == 0)
		format->pading = getpadding(arg, -1);
	else if (nocasefcmp(arg, "pr") == 0)
		format->pading = getpadding(arg, 1);
	else if (nocasefcmp(arg, "pc") == 0)
		format->pading = getpadding(arg, 0);
	else if (nocasefcmp(arg, "up") == 0)
		format->casee = 1;
	else if (arg[0] == 'p')
		format->precision = atoi(arg + 1);
	else if (arg[0] == 'b')
		format->base = atoi(arg + 1);
	else if (arg[0] == 'r')
		format->repeat = atoi(arg + 1);
	else if (arg[0] == 'n')
		format->nl = 1;
	else if (arg[0] == 'l')
		format->length[format->dimension++] = atoi(arg + 1);
	else if (arg[0] == 's')
		format->separator = arg + 1;
	else if (splitcontains(COLOR_SPLIT, arg, ":"))
		format->color = strcolor(arg);
	else
		error("invalid formatage argument");
}
