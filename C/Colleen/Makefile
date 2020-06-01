# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xamartin <xamartin@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/01 17:36:51 by xamartin          #+#    #+#              #
#    Updated: 2020/06/01 18:22:51 by xamartin         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

PHONY = all clean fclean re tclean test

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = Colleen
TEST_NAME = tmp_Colleen

SRC_NAME = Colleen.c
SRC_PATH = ./

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -fv $(OBJ)

fclean: clean
	@rm -fv $(NAME)

test: all
	./$(NAME) > $(TEST_NAME)
	diff $(TEST_NAME) $(SRC_NAME)

tclean: fclean
	@rm -fv $(TEST_NAME)

re: fclean all
