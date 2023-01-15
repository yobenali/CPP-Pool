NAME = Animal

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

RM = rm -rf

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
	@$(RM) $(NAME)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONEY : all fclean clean re