# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdeville <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/28 11:43:29 by tdeville          #+#    #+#              #
#    Updated: 2021/07/29 18:18:37 by tdeville         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_do-op.c ft_do-op2.c ft_do-op3.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
HEADERS	= do_op.h
RM		= rm -f
.c.o:
			${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o} 
		


${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
