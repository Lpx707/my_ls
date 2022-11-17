/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** ls -a
*/


#include "../include/my.h"

void my_ls_a(char *path)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(path);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            my_putstr(dir->d_name);
            my_putchar(' ');
        }
        closedir(d);
        my_putchar('\n');
    }
}
