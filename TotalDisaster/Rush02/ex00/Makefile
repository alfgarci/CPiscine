# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 21:02:46 by alfgarci          #+#    #+#              #
#    Updated: 2022/07/24 21:18:29 by alfgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS		= -Wall -Werror -Wextra
NAME		= rush-02
SANITIZE	= -fsanitize=address -g3
NAME_LEAKS	= checks_leaks
all: ./src/*.c
	gcc $(FLAGS) -I ./includes/ ./src/*.c -o $(NAME)

fclean:
	rm -f $(NAME) $(NAME_LEAKS)

leaks:
	gcc $(SANITIZE) -I ./includes/ ./src/*.c -o $(NAME_LEAKS)
