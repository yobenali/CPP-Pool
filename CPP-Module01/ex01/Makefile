NAME = zombieHorde

SRC = Zombie.cpp main.cpp zombieHorde.cpp

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

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