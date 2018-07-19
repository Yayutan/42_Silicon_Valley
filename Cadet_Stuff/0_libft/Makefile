NAME = libft
FLAGS = -Wall -Wextra -Werror -c
C_FILES = ....
O_FILES = ....

.PHONY: all clean fclean

all: $(NAME)

$(NAME).a: $(NAME)

$(NAME):
	gcc $(FLAGS) $(C_FILES)
	ar rc $(NAME).a $(O_FILES)
	ranlib $(NAME).a

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME).a
