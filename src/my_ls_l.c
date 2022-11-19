/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** ls -l
*/


#include "../include/my.h"

void my_ls_l(char *path)
{
    DIR *d;
    struct stat sb;
    struct dirent *dir;
    d = opendir(path);
    dir = readdir(d);

    
}