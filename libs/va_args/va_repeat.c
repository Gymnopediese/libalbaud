/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_repeat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:23:52 by albaud            #+#    #+#             */
/*   Updated: 2023/07/21 19:46:58 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "va_args.h"

void	va_repeat(size_t n, t_va_func f, ...)
{
	va_list	l;

	while (n--)
	{
		va_start(l, f);
		f(&l);
	}
}

void	va_prepeat(size_t n, t_va_pfunc f, void *p, ...)
{
	va_list	l;

	while (n--)
	{
		va_start(l, p);
		f(p, &l);
	}
}

