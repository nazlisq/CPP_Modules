NAME = sad

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


SRC = 	main.cpp\
		file.cpp\


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN)\nSad Objects Deleted!\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re
