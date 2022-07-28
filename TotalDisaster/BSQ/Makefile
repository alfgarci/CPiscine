# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 15:13:30 by alfgarci          #+#    #+#              #
#    Updated: 2022/07/27 15:19:22 by alfgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./srcs/ft_putstr.c 
			./srcs/ft_split.c 
			./srcs/ft_strlen.c 
			./srcs/main.c
			./srcs/maps.c
			./srcs/solve.c

OBJS	= ${SRCS:.c=.o}
INC		= includes
CC		= gcc -Wall -Wextra -Werror
NAME	= bsq

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
