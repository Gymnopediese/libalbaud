/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mget.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MGET_H
# define MGET_H

# include "../map.h"

t_pointer mget(t_map *map, t_elem elem);
t_pair	*getpair(t_map *map, t_elem key);
t_pointer	getkey(t_map *map, size_t index);
t_pointer	getvalue(t_map *map, size_t index);
char	*gethash(t_map *map, size_t index);
size_t	getkeysize(t_map *map, size_t index);
size_t	getvaluesize(t_map *map, size_t index);

#endif