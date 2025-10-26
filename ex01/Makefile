# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/26 07:59:46 by mbounoui          #+#    #+#              #
#    Updated: 2025/10/26 08:01:11 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRC_FILES	=	main.cpp phonebook.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o:%.cpp
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	rm -rf $(OBJ_FILES);

fclean: clean
	rm -f $(NAME); \

re: fclean all

.PHONY: all clean fclean re
