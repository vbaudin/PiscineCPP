# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbaudin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 15:21:42 by vbaudin           #+#    #+#              #
#    Updated: 2018/01/08 15:21:44 by vbaudin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = clang++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.cpp=.o)

HEADER = PhoneBook.hpp

SRC =	PhoneBook.cpp \
			User.cpp

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
