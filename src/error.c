/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** error.c
*/

#include "../include/my.h"

void not_dir(char *str, char *path)
{
    DIR *d = NULL;
    if (d == NULL) {
    my_putstr("Error: ");
    my_putstr(path);
    my_putstr(" is not a directory");
    }
}