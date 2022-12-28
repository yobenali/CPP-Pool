NAME = Megaphone

SRC = megaphone.cpp

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) :
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

all : $(NAME)
clean : 
	@rm -rf $(NAME)
fclean : clean
	@rm -rf $(NAME)
re : clean fclean all

.PHONEY : all clean fclean re