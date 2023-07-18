# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 16:16:47 by albaud            #+#    #+#              #
#    Updated: 2023/07/16 21:40:19 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

green="\033[0;32m"
files= $(wildcard *.c */*.c */*/*.c ../random/*.c)
all:
	gcc -g3 -fsanitize=address -Wall -Werror -Wextra ${files} -o array ../trashcan/trashcan.a
	-@./array