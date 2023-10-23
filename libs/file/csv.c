/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csv.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:45:02 by albaud            #+#    #+#             */
/*   Updated: 2023/10/19 14:56:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	atoia(double *res, char *str, char *split)
{
	int		i;
	int		k;
	int		len;

	len = strlen(split);
	i = -1;
	k = 0;
	while (str[k])
	{
		res[++i] = atof(&str[k]);
		while (str[k] && strncmp(&str[k], split, len))
			k++;
		k += !strncmp(&str[k], split, len) * len;
	}
}
