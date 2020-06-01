# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xamartin <xamartin@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/01 17:36:51 by xamartin          #+#    #+#              #
#    Updated: 2020/06/01 18:32:00 by xamartin         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

PHONY = all clean fclean re tclean test

CC = gcc
RM = @rm -fv
CFLAGS = -Wall -Wextra -Werror
NAME = Sully
TEST_NAME = Sully_5.c \
			Sully_4.c \
			Sully_3.c \
			Sully_2.c \
			Sully_1.c \
			Sully_0.c \
			Sully_5 \
			Sully_4 \
			Sully_3 \
			Sully_2 \
			Sully_1 \
			Sully_0 \

SRC_NAME = Sully.c
SRC_PATH = ./

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

test: all
	./$(NAME)

tclean: fclean
	$(RM) $(TEST_NAME)

re: fclean all
