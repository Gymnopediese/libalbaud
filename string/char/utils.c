/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:46:35 by albaud            #+#    #+#             */
/*   Updated: 2023/07/11 15:13:59 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cisupper(char *a)
{
	return (*a >= 'A' && *a <= 'Z');
}

int	cislower(char *a)
{
	return (*a >= 'a' && *a <= 'z');
}

int	cisnumeric(char *a)
{
	return (*a >= '0' && *a <= '9');
}

int	ctoupper(char a)
{
	return (a - 32 * cislower(&a));
}

int	ctolower(char a)
{
	return (a + 32 * cisupper(&a));
}
