/*
** EPITECH PROJECT, 2022
** EPITECH my_ls
** File description:
** function: perms.c
*/

#include "../include/my.h"

void types_perms(struct stat stat_file, ls_info *info)
{
    if (S_ISDIR(stat_file.st_mode))
        info->rights[0] = 'd';
    else if (S_ISLNK(stat_file.st_mode)) {
        info->rights[0] = 'l';
    }
    else info->rights[0] = '-';
}

void rights_file(struct stat stat_file, ls_info *info)
{
    info->rights = malloc(sizeof(char) * 11);
    types_perms(stat_file, info);
    info->rights[1] = (stat_file.st_mode & S_IRUSR ? 'r' : '-');
    info->rights[2] = (stat_file.st_mode & S_IWUSR ? 'w' : '-');
    info->rights[3] = (stat_file.st_mode & S_IXUSR ? 'x' : '-');
    info->rights[4] = (stat_file.st_mode & S_IRGRP ? 'r' : '-');
    info->rights[5] = (stat_file.st_mode & S_IWGRP ? 'w' : '-');
    info->rights[6] = (stat_file.st_mode & S_IXGRP ? 'x' : '-');
    info->rights[7] = (stat_file.st_mode & S_IROTH ? 'r' : '-');
    info->rights[8] = (stat_file.st_mode & S_IWOTH ? 'w' : '-');
    info->rights[9] = (stat_file.st_mode & S_IXOTH ? 'x' : '-');
    info->rights[10] = '\0';

    free(info->rights);
}
