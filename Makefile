# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:07:44 by albaud            #+#    #+#              #
#    Updated: 2023/10/18 09:24:00 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= $(filter-out $(wildcard libs/_*/*.c libs/*/_*/*.c libs/*/*/_*/*.c), $(wildcard libs/*/*.c libs/*/*/*.c libs/*/*/*/*.c))
OBJS		= $(patsubst libs/%.c, objs/%.o, $(SRCS))
NAME 		= libalbaud.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -Wno-deprecated-non-prototype
OBJ_DIR		= objs
SRC_DIR		= libs

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS)  -c $< -o $@

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

test	: $(OBJS)
		gcc ${CFLAGS} $(OBJS) main.c && ./a.out


src:
	echo $(SRCS)





libia	: vlib mlib p
		git clone https://github.com/Gymnopediese/libia.git libs/libia

p		:
		git clone https://github.com/Gymnopediese/p.git libs/p

mlib	: vlib
		git clone https://github.com/Gymnopediese/mlib.git libs/mlib

vlib	:
		git clone https://github.com/Gymnopediese/vlib.git libs/vlib

mlx		:
		git clone https://github.com/Gymnopediese/mlx-.git libs/mlx