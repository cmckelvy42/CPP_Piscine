# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 10:54:58 by cmckelvy          #+#    #+#              #
#    Updated: 2020/01/23 19:41:48 by cmckelvy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MEGA = whatever

SRC = whatever.cpp

CPP = clang++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(MEGA)

$(MEGA):
	@echo "\033[32mmaking whatever...\033[0m"
	@$(CPP) $(CFLAGS) -o $(MEGA) $(SRC)

.PHONY: clean
clean:
	@echo "\033[33mnothing to clean\033[0m"

.PHONY: fclean
fclean:
	@echo "\033[33mremoving executables...\033[0m"
	@rm -f $(MEGA)

.PHONY: re
re: fclean all