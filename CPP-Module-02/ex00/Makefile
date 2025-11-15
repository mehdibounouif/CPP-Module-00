# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/12 14:36:31 by mbounoui          #+#    #+#              #
#    Updated: 2025/11/15 11:29:59 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed1

CC = c++

FLAGS = -g3 -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp Fixed.cpp
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
