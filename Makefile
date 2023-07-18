# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:07:44 by albaud            #+#    #+#              #
#    Updated: 2023/07/18 12:41:48 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 		= ${wildcard */*.c */*/*.c */*/*/*.c}
OBJS 		= ${SRCS:.c=.o}
NAME 		= libalbaud.a
CC			= gcc
CFLAGS		= -g3 -fsanitize=address -Wall -Wextra -Werror

.c.o 	:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		
all 	: $(NAME)

$(NAME)	: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean	:
		rm -f ${OBJS}

fclean	:	clean
		rm -f ${NAME} 

re		: fclean all

test	: $(NAME)
		gcc ${CFLAGS} -o test main.c $(NAME) && ./test