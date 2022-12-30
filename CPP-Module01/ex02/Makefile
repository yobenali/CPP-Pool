NAME = Brain

SRC = main.cpp

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

all : $(NAME)

$(NAME) : $(SRC)
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)
clean :
	@$(RM) $(NAME)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONEY: all clean fclean re