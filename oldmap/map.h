/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 22:35:31 by albaud            #+#    #+#             */
/*   Updated: 2023/06/30 19:58:59 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

# define HASH_SIZE 16

typedef struct s_hash
{
	char	hash[HASH_SIZE];
	int		size;
}	t_hash;

typedef struct s_key
{
	char	*key;
	size_t	s_key;
}	t_key;

typedef struct s_map
{
	t_hash	*hash_table;
	t_key	*keys;
	char	*values;
	size_t	s_values;
	size_t	size;
	size_t	capacity;
}	t_map;

// clear()	Removes all the elements from the dictionary
// copy()	Returns a copy of the dictionary
// fromkeys()	Returns a dictionary with the specified keys and value
// get()	Returns the value of the specified key
// items()	Returns a list containing a tuple for each key value pair
// keys()	Returns a list containing the dictionary's keys
// pop()	Removes the element with the specified key
// popitem()	Removes the last inserted key-value pair
// setdefault()	Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
// update()	Updates the dictionary with the specified key-value pairs
// values()	Returns a list of all the values in the dictionary
t_map		map(size_t capacity, size_t s_values);
void		remap(t_map *map);

// return an iterator pointing to the begining of the array
void		*begin(t_map *arr);
// return an iterator pointing to the end of the array
void		*end(t_map *arr);
// return a const iterator pointing to the begining of the array
const void	*cbegin(t_map *arr);
// return a const iterator pointing to the end of the array
const void	*cend(t_map *arr);
// return the pointer of the element at position index
void		*getv(t_map *arr, size_t index);

// return an iterator pointing to the begining of the array
void		*begink(t_map *arr);
// return an iterator pointing to the end of the array
void		*endk(t_map *arr);
// return a const iterator pointing to the begining of the array
const void	*cbegink(t_map *arr);
// return a const iterator pointing to the end of the array
const void	*cendk(t_map *arr);
// return the pointer of the element at position index
void		*getk(t_map *arr, size_t index);


t_hash		hash(char	*p, size_t size);
void		setlen(t_map *map, void *key, size_t size, void *val);
void		setstr(t_map *map, void *key, void *val);
void		set(t_map *map, void *key, void *val);

void		*getlen(t_map *map, size_t size, void *key);
void		*getstr(t_map *map, void *key);
void		*get(t_map *map, void *key);
#endif



