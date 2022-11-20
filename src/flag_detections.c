/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** flag detection
*/


#include "../include/my.h"


int ls_flag(int ac, char **av)
{
    if (ac == 1)
        my_ls(".");
    if (ac == 2 && av[1][0] != '-')
        my_ls(av[1]);
    return (0);
}

int ls_a_flag(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'a')
        my_ls_a(".");
    if (ac == 3 && av[1][0] == '-' && av[1][1] == 'a')
        my_ls_a(av[2]);
    return (0);
}
