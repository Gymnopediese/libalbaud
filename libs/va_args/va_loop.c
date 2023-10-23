/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:25:25 by albaud            #+#    #+#             */
/*   Updated: 2023/10/18 08:36:49 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "va_args.h"

void	va_loop(size_t n, void (*f)(va_list *), ...)
{
	va_list	l;

	va_start(l, f);
	while (n--)
		f(&l);
}

void	va_ploop(size_t n, void (*f)(void *, va_list *), void *p, ...)
{
	va_list	l;

	va_start(l, p);
	while (n--)
		f(p, &l);
}
