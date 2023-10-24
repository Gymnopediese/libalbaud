/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:58:59 by albaud            #+#    #+#             */
/*   Updated: 2023/10/23 21:16:38 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input.h"

int	input_int(char *prompt, int min, int max)
{
	t_str	str;
	int		res;

	if (prompt)
		printf("%s\n", prompt);
	while (1)
	{
		str = input(">> ");
		res = atoi(str.chars);
		delete(str.chars);
		if (res < min || res > max)
			printf("Invalid int in the range %i-%i\n", min, max);
		else
			break ;
	}
	return (res);
}

double	input_double(char *prompt, double min, double max)
{
	t_str	str;
	double	res;

	if (prompt)
		printf("%s\n", prompt);
	while (1)
	{
		str = input(">> ");
		res = atof(str.chars);
		delete(str.chars);
		if (res < min || res >= max)
			printf("Invalid int in the range %f-%f\n", min, max - 1);
		else
			break ;
	}
	return (res);
}

void	input_box(void *arg, char *text, int options, char **lines, void (**f)())
{
	int		i;

	i = -1;
	printf("%s\n", text);
	while (++i < options)
	{
		printf("[%d] %s\n", i + 1, lines[i]);
	}
	i = input_int(0, 1, options + 1);
	f[i - 1](arg);
}
