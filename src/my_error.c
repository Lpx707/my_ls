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
    DIR *d;
    d = opendir(path);
    if (d == NULL) {
    my_putstr("my_ls: cannot access '");
    my_putstr(path);
    my_putstr(": No such file or directory");
    my_putchar('\n');
    return 0;
    }
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

// No file exist ls error
void no_file(char *path)
{
    my_putstr("my_ls: cannot access '");
    my_putstr(path);
    my_putstr(": No such file or directory");
    my_putchar('\n');
    return 0;
}

// File exist in my_ls
void file_exist(char *path, char *argv)
{
    struct stat sb;
    lstat(argv[1], &sb);
    if (S_ISREG(sb.st_mode))
    my_putstr(path);
    my_putchar('\n');
    return 0;
}

