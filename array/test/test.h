/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:04:49 by albaud            #+#    #+#             */
/*   Updated: 2023/07/06 19:37:56 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../array.h"

# define HEADER printf("testing %s%s%s from %s%s:%i%s\n", BLUE, __PRETTY_FUNCTION__, RESET, BLUE, __FILE__, __LINE__, RESET)

int		filtre_100(void *a);
int		compare(void *a, void *b);
void	print_double(void *a);
void	print_string(char **a);
int		filtre_200(void *a);

void	test_push_front(void);
void	test_push(void);
void	test_remove(void);
void	test_unique(void);
void	test_pop(void);
void	test_clear(void);
void	test_filter(void);
void	test_intersect(void);
void	test_insert(void);
void	test_sub(void);
void	test_fill(void);
#endif