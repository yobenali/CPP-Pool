NAME = PmergeMe

SRC = main.cpp PmergeMe.cpp

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

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