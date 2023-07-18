/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opperations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:38:20 by albaud            #+#    #+#             */
/*   Updated: 2023/07/05 22:49:52 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../array.h"

int	and_opp(int a, int b)
{
	return (a && b);
}

int	nand_opp(int a, int b)
{
	return (!(a && b));
}

int	nor_opp(int a, int b)
{
	return (!(a || b));
}

int	or_opp(int a, int b)
{
	return (a || b);
}

int	xor_opp(int a, int b)
{
	return (!(a && b) && (a || b));
}
