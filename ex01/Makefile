
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
FILE = main.cpp Contact.class.cpp PhoneBook.class.cpp
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
