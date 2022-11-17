/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac == 1)
        my_ls(".");
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'a')
        my_ls_a(".");
    if (ac == 2 && av[1][0] != '-')
        my_ls(av[1]);
    if (ac == 3 && av[1][0] == '-' && av[1][1] == 'a')
        my_ls_a(av[2]);
    return (0);
}
