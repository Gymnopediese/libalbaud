/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 00:08:39 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 20:29:50 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

#define CAST int

typedef struct s_6
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
}	t_s;

typedef struct s_4
{
	int	a;
	int	b;
	int	c;
	char as;
	char bs;
	char cs;
}	t_4;

typedef struct s_8
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;
	int	h;
}	t_seum;

// void	salut(int num, ...)
// {
// 	va_list	l;
// 	t_seum	seum;
// 	t_4		forr;
// 	int		*a;

// 	va_start(l, num);
// 	printf("%i\n", *va_arg_len(&l, sizeof(char)));
// 	printf("%d\n", *(int *)va_arg_len(&l, sizeof(int)));
// 	printf("%f\n", *(double *)va_arg_len(&l, sizeof(double)));
// 	forr = *(t_4 *)va_arg_len(&l, sizeof(t_4));
// 	printf("%d\n", forr.a);
// 	printf("%d\n", forr.b);
// 	printf("%d\n", forr.c);
// 	seum = *(t_seum *)va_arg_len(&l, sizeof(t_seum));
// 	printf("%d\n", seum.a);
// 	printf("%d\n", seum.b);
// 	printf("%d\n", seum.c);
// 	printf("%d\n", seum.d);
// 	printf("%d\n", seum.e);
// 	printf("%d\n", seum.f);
// }

void	salut(int num, ...)
{
	va_list	l;
	va_list	dl;
	t_seum	seum;
	t_4		forr;
	int		*a;

	va_start(l, num);
	va_copy(dl, l);
	printf("%lu\n", sizeof(char *));
	printf("%lu\n", sizeof(char [8]));
	printf("%s\n", (char *)va_arg(dl, char *));
	char *s = (void *)va_arg(l, char [8]);
	printf("%s\n", s);
}

int	main(void)
{
	t_seum	s = (t_seum){1,2,3,4,5,6, 7, 8};
	CAST	*ss;
	ss = (CAST *)&s;
	for (int k = 0; k < sizeof(t_seum) / sizeof(CAST); k++)
	{
		printf("se %d\n", ss[k]);
	}
}
