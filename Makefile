# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:07:44 by albaud            #+#    #+#              #
#    Updated: 2023/07/18 12:55:50 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= ${wildcard libs/*/*.c libs/*/*/*.c libs/*/*/*/*.c}
OBJS		= $(patsubst libs/%.c, objs/%.o, $(SRCS))
NAME 		= libalbaud.a
CC			= gcc
CFLAGS		=   -Wall -Wextra -Werror #-g3 -fsanitize=address
OBJ_DIR		= objs
SRC_DIR		= libs

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.c.o 	:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		
all 	: $(NAME)

$(NAME)	: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean	:
		rm -rf $(OBJ_DIR)
fclean	:	clean
		rm -f ${NAME} 
re:		fclean all

test	: $(NAME)
		gcc ${CFLAGS} -o test main.c $(NAME) && ./test