# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/30 20:05:54 by mchuang           #+#    #+#              #
#    Updated: 2018/05/31 22:39:39 by mchuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME).c: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(NAME).c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re : clean all
