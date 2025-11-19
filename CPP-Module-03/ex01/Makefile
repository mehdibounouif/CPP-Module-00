# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 11:24:55 by mbounoui          #+#    #+#              #
#    Updated: 2025/11/18 11:26:44 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Aaaaaaaand

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp ClapTrap.cpp

SRC_OBJS = $(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
	$(CC) $(FLAGS) $(SRC_OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(SRC_OBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re
