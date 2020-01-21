# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 10:55:33 by cmckelvy          #+#    #+#              #
#    Updated: 2020/01/13 10:58:07 by cmckelvy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = Person.cpp \
	  phonebook.cpp

CPP = clang++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@echo "\033[32mmaking phonebook...\033[0m"
	@$(CPP) $(CFLAGS) -o $(NAME) $(SRC)

.PHONY: clean
clean:
	@echo "\033[33mnothing to clean\033[0m"

.PHONY: fclean
fclean:
	@echo "\033[33mremoving executables...\033[0m"
	@rm -f $(NAME)

.PHONY: re
re: fclean all