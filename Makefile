# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 16:22:29 by qbonvin           #+#    #+#              #
#    Updated: 2021/12/06 16:06:30 by qbonvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Declaration de mes variables
NAME = libftprintf.a
LIBFT = ./libft
SRCS = ft_formator.c ft_putchar.c ft_printf.c ft_putnbr_hexa_maj.c \
ft_putnbr_hexa_min.c ft_putstr.c ft_putnbr.c ft_len_number.c \
ft_putnbr_unsigned.c ft_uitoa.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = ${SRCS:.c=.o}
# fin de la declatation des variables

all : ${NAME}

${NAME} : ${OBJ}
	make -C ${LIBFT}
	cp libft/libft.a .
	mv libft.a ${NAME}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : clean fclean re all