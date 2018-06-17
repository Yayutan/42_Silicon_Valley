# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 19:02:01 by mchuang           #+#    #+#              #
#    Updated: 2018/05/29 23:16:12 by mchuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CMAIN = ft_do_op.c

LIB = ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c
LIB_O = ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o
OP = op/ft_add.c op/ft_sub.c op/ft_mul.c op/ft_div.c op/ft_mod.c op/ft_usage.c
FLAGS = -Wall -Werror -Wextra
HDR = ft_do_op.h
.PHONY: all clean re

all:
	gcc -c $(LIB)
	ar rc libft.a *.o
	gcc -o $(NAME) $(FLAGS) $(CMAIN) $(OP) -L. -lft -I $(HDR)

clean:
	/bin/rm -f $(NAME) $(LIB_O)

re: clean all
