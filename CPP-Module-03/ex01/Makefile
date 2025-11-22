# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 11:24:55 by mbounoui          #+#    #+#              #
#    Updated: 2025/11/22 09:25:46 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serena 

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp

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
