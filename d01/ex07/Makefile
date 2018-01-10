# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/10 17:24:13 by vbaudin           #+#    #+#              #
#    Updated: 2018/01/10 17:24:14 by vbaudin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CC = clang++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.cpp=.o)

SRC =	main.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
