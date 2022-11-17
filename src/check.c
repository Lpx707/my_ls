/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** check.c
*/

#include "../include/my.h"

// Function to link path for ls
char *link_path(char *path, char *name)
{
    char *new_path = malloc(sizeof(char) * (my_strlen(path) + my_strlen(name) + 2));
    int i = 0;
    int j = 0;

    for (; path[i] != '\0'; i++)
        new_path[i] = path[i];
    if (path[i - 1] != '/')
        new_path[i++] = '/';
    for (; name[j] != '\0'; j++)
        new_path[i + j] = name[j];
    new_path[i + j] = '\0';
    return (new_path);
}


// Function to check if the path is a directory
int is_dir(char *path)
{
    DIR *d = opendir(path);

    if (d == NULL)
        return (0);
    closedir(d);
    return (1);
}

// Function to check if the path is a file
int is_file(char *path)
{
    struct stat s;

    if (stat(path, &s) == -1)
        return (0);
    if (S_ISREG(s.st_mode))
        return (1);
    return (0);
}

// Function to check if the path is a link
int is_link(char *path)
{
    struct stat s;

    if (lstat(path, &s) == -1)
        return (0);
    if (S_ISLNK(s.st_mode))
        return (1);
    return (0);
}

// Function to check if the path is a special file
int is_special(char *path)
{
    struct stat s;

    if (stat(path, &s) == -1)
        return (0);
    if (S_ISCHR(s.st_mode) || S_ISBLK(s.st_mode) || S_ISFIFO(s.st_mode) || S_ISSOCK(s.st_mode))
        return (1);
    return (0);
}


