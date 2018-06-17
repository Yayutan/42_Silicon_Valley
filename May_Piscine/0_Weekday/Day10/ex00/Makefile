# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 12:03:10 by mchuang           #+#    #+#              #
#    Updated: 2018/05/29 01:51:20 by mchuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c  srcs/ft_swap.c 
HEADER = includes
FLAG = -c -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME).a: $(NAME)

$(NAME):
	gcc $(FLAG) $(CFILES) -I$(HEADER)
	ar rc $(NAME).a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o  ft_swap.o
	ranlib $(NAME).a

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o  ft_swap.o

fclean: clean
	/bin/rm -f $(NAME).a

re: fclean all
