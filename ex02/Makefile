# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 09:53:44 by mbounoui          #+#    #+#              #
#    Updated: 2025/11/02 15:57:15 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account

CC			=	c++

CFLAGS		=	-g3 -Wall -Werror -Wextra -std=c++98

SRC_FILES	=	tests.cpp Account.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

.PHONY: all clean fclean re
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

