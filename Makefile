# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfermey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 08:58:38 by wfermey           #+#    #+#              #
#    Updated: 2022/03/02 15:10:26 by wilhelmfermey    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=  ft_printf.c ft_funct.c ft_funct2.c ft_funct3.c ft_funct4.c

CFLAGS		= -Wall -Werror -Wextra

CC			= gcc
RM			= rm -f

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

.c.o:
			${CC} ${CFLAGS} -I. -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re:			fclean all
