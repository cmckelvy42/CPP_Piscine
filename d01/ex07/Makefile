# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/09 16:37:20 by cmckelvy          #+#    #+#              #
#    Updated: 2020/05/09 16:38:26 by cmckelvy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp

CPP = clang++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@echo "making replace..."
	@$(CPP) $(CFLAGS) -o $(NAME) $(SRC)

.PHONY: clean
clean:
	@echo "nothing to clean"

.PHONY: fclean
fclean:
	@echo "removing executables..."
	@rm -f $(NAME)

.PHONY: re
re: fclean all