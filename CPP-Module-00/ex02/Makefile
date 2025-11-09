NAME		=	account

CC			=	c++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

SRC_FILES	=	tests.cpp Account.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_FILES);

fclean: clean
	rm -f $(NAME);

re: fclean all
.PHONY: all clean fclean re
