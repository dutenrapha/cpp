
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
FILE = tests.cpp Account.cpp
NAME = main

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME)

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@
