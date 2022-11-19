/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** error.c
*/

#include "../include/my.h"


// No directory exist ls error
void no_dir(char *path)
{
    my_putstr("my_ls: cannot access '");
    my_putstr(path);
    my_putstr(": No such file or directory");
    my_putchar('\n');
    return 0;
}

// No permission ls error
void no_perm(char *path)
{
    my_putstr("my_ls: cannot open directory '");
    my_putstr(path);
    my_putstr(": Permission denied");
    my_putchar('\n');
    return 0;
}

