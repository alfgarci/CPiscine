# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 02:47:24 by alfgarci          #+#    #+#              #
#    Updated: 2022/07/27 18:24:52 by alfgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
INC		= includes
CC		= gcc -Wall -Wextra -Werror
NAME	= libft.a

.c.o:
			${CC} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all: 		${NAME}

clean:
			rm -f ${OBJS} 

fclean:		clean
			rm -f ${NAME}

re:			fclean all
