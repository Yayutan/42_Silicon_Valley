# Written under reference of pbondoer's very well structured Makefile

NAME = fdf

# src and objects
SRC = ./srcs/test.c

OBJ = $(SRC:.c=.o))

# compiler related
CC = gcc
FLAGS = -Wall -Werror -Wextra

# libraries used
# mlx
MLXDIR = ./minilibx_macos/
MLXLIB = $(addprefix $(MLXDIR), mlx.a)
MLXINC = -I ./minilibx_macos
MLXLNK = -L ./minilibx_macos -lmlx -framework OpenGL -framework Appkit

LFTDIR = ./libft/
LFTINC = -I ./libft
LFTLNK = -L ./libft -l ft

# directories
SRCDIR = ./src/
INDIR = ./includes/
OBJDIR = ./obj/

$(NAME): all

all: 
	make -C $(MLXDIR)
	make -C $(LFTDIR)
	gcc $(SRC) $(MLXLNK) $(LFTLNK) -lm -o $(NAME)

clean:
	rm test.o

fclean: clean
	rm a.out
