/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:53:42 by albaud            #+#    #+#             */
/*   Updated: 2023/10/23 20:58:11 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
# define INPUT_H

# include "../libalbaud.h"

int		input_int(char *prompt, int min, int max);
double	input_double(char *prompt, double min, double max);
void	input_box(void *arg, char *text, int options, char **lines, void (**f)());

#endif