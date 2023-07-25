/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:25:25 by albaud            #+#    #+#             */
/*   Updated: 2023/07/21 19:46:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "va_args.h"

void	va_loop(size_t n, t_va_func f, ...)
{
	va_list	l;

	va_start(l, f);
	while (n--)
		f(&l);
}

void	va_ploop(size_t n, t_va_pfunc f, void *p, ...)
{
	va_list	l;

	va_start(l, p);
	while (n--)
		f(p, &l);
}
