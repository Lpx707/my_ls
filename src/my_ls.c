/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** ls.c
*/

#include "../include/my.h"

#include<stdio.h>
#include<dirent.h>

void my_ls(char *path)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(path);
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            if (dir->d_name[0] != '.')
            {
                my_putstr(dir->d_name);
                my_putchar(' ');
            }
        }
        closedir(d);
        my_putchar('\n');
    }
}
