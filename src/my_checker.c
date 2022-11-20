/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** check conditions
*/


#include "../include/my.h"


int check_file(char *av)
{
    struct stat sb;

    if (stat(av, &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }
    if (S_ISREG(sb.st_mode))
        return (1);
    return (0);
}

int check_dir(char *av)
{
    struct stat sb;

    if (stat(av, &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }
    if (S_ISDIR(sb.st_mode))
        return (1);
    return (0);
}

void multiple_d(int ac, char **av)
{
    int i = 1;

    while (i < ac) {
        if (check_dir(av[i]) == 1) {
            my_putstr(av[i]);
            my_putstr(":\n");
            my_ls(av[i]);
            my_putchar('\n');
        }
        i++;
    }
}

void multiple_f(int ac, char **av)
{
    int i = 1;

    while (i < ac) {
        if (check_file(av[i]) == 1) {
            my_putstr(av[i]);
            my_putchar('\n');
        }
        i++;
    }
}

void multiple_fd(int ac, char **av)
{
    int i = 1;

    while (i < ac) {
        if (check_file(av[i]) == 1) {
            my_putstr(av[i]);
            my_putchar('\n');
        }
        if (check_dir(av[i]) == 1) {
            my_putstr(av[i]);
            my_putstr(":\n");
            my_ls(av[i]);
            my_putchar('\n');
        }
        i++;
    }
}
