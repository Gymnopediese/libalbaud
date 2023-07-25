/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:55 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRACT_H
# define EXTRACT_H

# include "../string.h"

size_t	extract_str(t_str *res, t_str *to_extract, char *pattern, size_t j);
size_t	extract_int(t_str *res, t_str *to_extract, size_t j);
size_t	extract_double(t_str *res, t_str *to_extract, size_t j);
void	*extract(char *to_extract, char *pattern, size_t len);

#endif