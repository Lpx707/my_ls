/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** basic ls command
*/


#include "../include/my.h"


void my_ls(char *av)
{
    DIR *dir = dir = opendir(av);
    struct dirent *sd;
    struct stat sb;
    if (stat(av, &sb) == -1)
        error_no_such_file(av);
    if (S_ISREG(sb.st_mode))
        print_file(av);
    if (S_ISDIR(sb.st_mode)) {
        while ((sd = readdir(dir)) != NULL) {
            if (sd->d_name[0] != '.')
                my_putstr(sd->d_name);
                my_putchar(32);
        }
        closedir(dir);
        my_putchar('\n');
    }
}
