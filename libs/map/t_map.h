/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_map.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:35:31 by albaud            #+#    #+#             */
/*   Updated: 2023/07/25 02:37:19 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MAP_H
# define T_MAP_H

# include "../libalbaud.h"

# define HASH_SIZE 16


// typedef struct s_map
// {
// 	t_hash	*hash_table;
// 	t_key	*keys;
// 	char	*values;
// 	size_t	s_values;
// 	size_t	size;
// 	size_t	capacity;
// }	t_map;

typedef t_arr	t_map;

// clear()	Removes all the elements from the dictionary
// copy()	Returns a copy of the dictionary
// fromkeys()	Returns a dictionary with the specified keys and value
// getr()	Returns the value of the specified key
// items()	Returns a list containing a tuple for each key value pair
// keys()	Returns a list containing the dictionary's keys
// pop()	Removes the element with the specified key
// popitem()	Removes the last inserted key-value pair
// setdefault()	Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
// update()	Updates the dictionary with the specified key-value pairs
// values()	Returns a list of all the values in the dictionary


// // return an iterator pointing to the begining of the array
// void		*begin(t_map *arr);
// // return an iterator pointing to the end of the array
// void		*end(t_map *arr);
// // return a const iterator pointing to the begining of the array
// const void	*cbegin(t_map *arr);
// // return a const iterator pointing to the end of the array
// const void	*cend(t_map *arr);
// // return the pointer of the element at position index
// void		*getv(t_map *arr, size_t index);

// // return an iterator pointing to the begining of the array
// void		*begink(t_map *arr);
// // return an iterator pointing to the end of the array
// void		*endk(t_map *arr);
// // return a const iterator pointing to the begining of the array
// const void	*cbegink(t_map *arr);
// // return a const iterator pointing to the end of the array
// const void	*cendk(t_map *arr);
// // return the pointer of the element at position index
// void		*getk(t_map *arr, size_t index);


t_map		newmap(size_t capacity);

void		*getvlen(t_map *map, size_t size, void *key);
void		*getstr(t_map *map, void *key);
void		*getlen(t_map *map, size_t size, ...);
void		*getpvlen(t_map *map, size_t size, void *key);
void		*getpstr(t_map *map, void *key);
void		*getplen(t_map *map, size_t size, ...);

void		pair_infos(t_pair *pair);

void		hash(char *o, size_t size, char *res);
void		set(t_map *map, t_elem key, t_elem value);

size_t		getkeysize(t_map *map, size_t index);
size_t		getvaluesize(t_map *map, size_t index);

int			remove_keylen(t_map *map, size_t size, void *key);
int			remove_keystr(t_map *map, void *key);
int			remove_key(t_map *map, size_t size, ...);

t_map		to_map(t_arr *keys, t_arr *values);
t_map		to_map_kp(t_arr *keys, t_arr *values);
t_map		to_map_vp(t_arr *keys, t_arr *values);
t_map		to_map_pp(t_arr *keys, t_arr *values);
#endif
