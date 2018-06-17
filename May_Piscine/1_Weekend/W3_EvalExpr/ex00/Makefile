NAME = eval_expr
C_FILES = atoitoa.c eval_expr.c print_parse_helper.c queue.c stack.c
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $ -o $(NAME) $(C_FILES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
