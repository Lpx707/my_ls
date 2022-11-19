##
## EPITECH PROJECT, 2022
## my_ls
## File description:
## Makefile
##

SRC =	lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_strlen.c	\
		lib/my_putnbr.c	\
		lib/my_strcmp.c	\
		src/flag_conditions.c	\
		src/my_error.c	\
		src/my_get.c	\
		src/switch_param.c	\
		src/my_ls_a.c	\
		src/my_ls.c	\
		src/my_ls_l.c	\
		src/main.c

OBJ = $(SRC:.c=.o)

NAME = my_ls

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
