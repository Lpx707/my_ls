/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** check.c
*/

#include "../include/my.h"


char *link_path(char *path, char *name)
{
    char fc = (my_strlen(path) + my_strlen(name) + 2);
    char *new_path = malloc(sizeof(char) * fc);
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

// If the path link to a file, print file

int check_file(char *path)
{
    struct stat sb;

    if (lstat(path, &sb) == -1) {
        perror("lstat");
        return (84);
    }
    if (S_ISREG(sb.st_mode))
        my_putstr(path);
    return (0);
}

// Read file

int read_file(path)
{
    int fd;
    char *buffer;
    int size;

    fd = open
    (path, O_RDONLY);
    if (fd == -1)
        return (84);
    size = lseek(fd, 0, SEEK_END);
    buffer = malloc(sizeof(char) * (size + 1));
    if (buffer == NULL)
        return (84);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, size);
    buffer[size] = '\0';
    my_putstr(buffer);
    free(buffer);
    close(fd);
    return (0);
}






