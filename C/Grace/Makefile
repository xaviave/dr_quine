# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xamartin <xamartin@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/01 17:36:51 by xamartin          #+#    #+#              #
#    Updated: 2020/06/01 18:31:56 by xamartin         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

PHONY = all clean fclean re tclean test

CC = gcc
RM = @rm -fv
CFLAGS = -Wall -Wextra -Werror
NAME = Grace
TEST_NAME = Grace_kid.c

SRC_NAME = Grace.c
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
	diff $(TEST_NAME) $(SRC_NAME)

tclean: fclean
	$(RM) $(TEST_NAME)

re: fclean all
