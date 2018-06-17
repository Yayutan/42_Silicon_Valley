# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/30 20:05:54 by mchuang           #+#    #+#              #
#    Updated: 2018/05/31 22:43:25 by mchuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FLAGS = -Wall -Wextra -Werror
FILES = ft_tail.c ft_tail_help.c
.PHONY: all clean fclean re

all: $(NAME)

$(NAME).c: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(FILES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re : clean all
