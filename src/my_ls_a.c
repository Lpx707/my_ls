/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** ls -a
*/


#include "../include/my.h"


void my_ls_a(char *av)
{
    DIR *dir;
    struct dirent *sd;
    struct stat sb;

    if (stat(av, &sb) == -1) {
        error_no_such_file(av);
    }
    if (S_ISREG(sb.st_mode)) {
        my_putstr(av);
        my_putchar('\n');
    }
    if (S_ISDIR(sb.st_mode)) {
        dir = opendir(av);
        while ((sd = readdir(dir)) != NULL) {
            my_putstr(sd->d_name);
            my_putchar(' ');
        }
        closedir(dir);
        my_putchar('\n');
    }
}
