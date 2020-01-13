# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 10:54:58 by cmckelvy          #+#    #+#              #
#    Updated: 2020/01/13 10:55:22 by cmckelvy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MEGA = megaphone

SRC = megaphone.cpp

CPP = clang++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(MEGA)

$(MEGA):
	@echo "\033[32mmaking megaphone...\033[0m"
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