/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_extract.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:34:54 by albaud            #+#    #+#             */
/*   Updated: 2023/07/08 02:37:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

typedef struct s_2str
{
	char	*s1;
	char	*s2;
	int		i1;
	int		i2;
	double	d1;
	double	d2;
}	t_2str;


void	test_extract(void)
{
	t_2str	*str2;

	str2 = extract("salut:mec", "%s:%s", sizeof(t_2str));
	printf("%s:%s\n", str2->s1, str2->s2);

	str2 = extract(" salut : mec ", " %s : %s ", sizeof(t_2str));
	printf("%s:%s\n", str2->s1, str2->s2);
	printf("%i:%i\n", str2->i1, str2->i2);
	printf("%f:%f\n", str2->d1, str2->d2);


	str2 = extract(" salut : mec : 42 : 24 ", " %s : %s : %i : %i ", sizeof(t_2str));
	printf("%s:%s\n", str2->s1, str2->s2);
	printf("%i:%i\n", str2->i1, str2->i2);
	printf("%f:%f\n", str2->d1, str2->d2);

	str2 = extract(" salut : mec : 42 : 24 : 42.42 : 0.42 ", " %s : %s : %i : %i : %f : %f ", sizeof(t_2str));
	printf("%s:%s\n", str2->s1, str2->s2);
	printf("%i:%i\n", str2->i1, str2->i2);
	printf("%f:%f\n", str2->d1, str2->d2);
}
