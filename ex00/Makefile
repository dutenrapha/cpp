# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 23:38:32 by coder             #+#    #+#              #
#    Updated: 2022/01/19 23:38:32 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
FILE = megaphone.cpp
NAME = megaphone

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	@echo -e
	./$(NAME) "shhhhh... I think the students are asleep..."
	@echo -e
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo -e
	./$(NAME)

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@
