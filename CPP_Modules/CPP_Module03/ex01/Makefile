NAME = ScavTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = 	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN)\nScavTrap Objects Deleted!\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re
