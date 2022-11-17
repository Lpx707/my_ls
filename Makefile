##
## EPITECH PROJECT, 2022
## my_ls
## File description:
## Makefile
##

SRC =	lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_putnbr.c	\
		src/error.c	\
		src/perms.c	\
		src/switch_param.c	\
		src/check.c	\
		src/my_ls.c	\
		src/my_ls_a.c	\
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

##