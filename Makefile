##
## EPITECH PROJECT, 2022
## my_ls
## File description:
## Makefile
##

SRC =	lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_strlen.c	\
		lib/my_put_nbr.c	\
		lib/my_strcmp.c	\
		src/callback.c	\
		src/error.c	\
		src/my_checker.c	\
		src/flag_detections.c	\
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
	clear

fclean: clean
	rm -f $(NAME)
	clear

re: fclean all
