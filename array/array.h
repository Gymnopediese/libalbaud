/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:35:31 by albaud            #+#    #+#             */
/*   Updated: 2023/07/10 15:20:03 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <stdarg.h>

# include "../trashcan/trashcan.h"
# include "t_arr.h"

# include "error/error.h"
# include "search/find/find.h"
# include "search/count/count.h"
# include "search/contains/contains.h"
# include "search/index/index.h"

# include "modify/modify.h"

# include "expend/expend.h"

# include "reduce/reduce.h"

# define VA_ARG_MAX_ELEM 5


// find trouve lelement et le renvoie
// index trouve leleemnt et renvoie lindex
// contain oui ou non est dedans

t_arr		arrayv(size_t ammount, size_t size, char *c);
// return an array of capacity ammount and with elements of size size
t_arr		array(size_t ammount, size_t size);
// double the capacity of the array
void		arrealloc(t_arr	*res, size_t size);
// push elem to the end of the array

// clear the array
void		clear(t_arr *arr);
// return a copy of the array
t_arr		copy(t_arr *arr);

// return an iterator pointing to the begining of the array
void		*begin(t_arr *arr);
// return an iterator pointing to the end of the array
void		*end(t_arr *arr);
// return a const iterator pointing to the begining of the array
const void	*cbegin(t_arr *arr);
// return a const iterator pointing to the end of the array
const void	*cend(t_arr *arr);
// return the pointer of the element at position index
void		*get(t_arr *arr, size_t index);

// swap elements at postion a and b
void		swap(t_arr *arr, size_t a, size_t b);
// sort elements using the cmp function
void		sort(t_arr *arr, int (*cmp)(void *, void *));

// reverse the array
void		reverse(t_arr *arr);
// apply the function to the elements of the array
void		map(t_arr *arr, void (*function)());
// remove the element at ind of the list
void		filter(t_arr *arr, int (*condition)(void *));

void		extend(t_arr *left, t_arr *right);

t_arr		arrayn(size_t ammount, size_t type, ...);

char		*va_arg_len(va_list *l, size_t len);

t_arr		intersect(t_arr *a, t_arr *b, int (*opp)(int, int));

t_arr		subarr(t_arr *arr, size_t s, size_t e);

void		minmaxlen(t_arr *arr, size_t *start, size_t *end);

void		unique(t_arr *arr);

void		*get_any(t_arr *arr, size_t index);

int			memcmpn(char *a, char *b, size_t n);

int			and_opp(int a, int b);
int			nand_opp(int a, int b);
int			nor_opp(int a, int b);
int			or_opp(int a, int b);
int			xor_opp(int a, int b);

t_arr		intersect(t_arr *a, t_arr *b, int (*opp)(int, int));
t_arr		intersectf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int));
int			has_intersection(t_arr *a, t_arr *b, int (*opp)(int, int));
int			has_intersectionf(t_arr *a, t_arr *b, int (*f)(), int (*opp)(int, int));

t_arr		subright(t_arr *arr, size_t s);
t_arr		subleft(t_arr *arr, size_t e);

int			are_all(t_arr *arr, int (*func)());
int			are_not(t_arr *arr, int (*func)());
int			is_n(t_arr *arr, size_t n, int (*func)());
int			is_only_n(t_arr *arr, size_t n, int (*func)());
int			is_any(t_arr *arr, int (*func)());

t_arr		split(t_arr *arr, char *sep, size_t size);
t_arr		splitset(t_arr *arr, char **sep);

t_arr		subcontent(t_arr *arr, size_t startt, char *start, size_t endd,char *end);
t_arr		subcontents(t_arr *arr, char *start, char *end);
// extend()	Add the elements of a list (or any iterable), to the end of the current list
// insert()	Adds an element at the specified position
// pop()	Removes the element at the specified position
#endif



