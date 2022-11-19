/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** ls command
*/


#include "../include/my.h"

// Get File from path

char *get_file(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    char *file = NULL;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            file = dir->d_name;
        }
        closedir(d);
    }
    return (file);
}
