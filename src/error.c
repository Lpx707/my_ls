/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** error for my_ls
*/


#include "../include/my.h"

// Error no such file or directory
void error_no_such_file(char *av)
{
    my_putstr("my_ls: cannot access '");
    my_putstr(av);
    my_putstr(": No such file or directory");
    my_putchar('\n');
}
