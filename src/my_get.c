/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** get informations about file for ls- l
*/


#include "../include/my.h"

// Get the number of blocks
int get_blocks(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    int blocks = 0;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            blocks += sb.st_blocks;
        }
        closedir(d);
    }
    return (blocks);
}

// Get the number of links
int get_links(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    int links = 0;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            links += sb.st_nlink;
        }
        closedir(d);
    }
    return (links);
}

// Get user
char *get_user(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    struct passwd *pwd;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            pwd = getpwuid(sb.st_uid);
        }
        closedir(d);
    }
    return (pwd->pw_name);
}

// Get group
char *get_group(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    struct group *grp;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            grp = getgrgid(sb.st_gid);
        }
        closedir(d);
    }
    return (grp->gr_name);
}

// Get size
int get_size(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    int size = 0;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            size += sb.st_size;
        }
        closedir(d);
    }
    return (size);
}

// Get date
char *get_date(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    char *date;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            date = ctime(&sb.st_mtime);
        }
        closedir(d);
    }
    return (date);
}

// Get name
char *get_name(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    char *name;

    d = opendir(path);

    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            name = dir->d_name;
        }
        closedir(d);
    }
    return (name);
}

// Get time
char *get_time(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    char *time;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            time = ctime(&sb.st_mtime);
        }
        closedir(d);
    }
    return (time);
}

// Get file name
char *get_file_name(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    char *file_name;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            file_name = dir->d_name;
        }
        closedir(d);
    }
    return (file_name);
}

// Get type
char get_type(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    char type;

    d = opendir(path);

    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            if (S_ISDIR(sb.st_mode))
                type = 'd';
            else if (S_ISREG(sb.st_mode))
                type = '-';
            else if (S_ISLNK(sb.st_mode))
                type = 'l';
            else if (S_ISCHR(sb.st_mode))
                type = 'c';
            else if (S_ISBLK(sb.st_mode))
                type = 'b';
            else if (S_ISFIFO(sb.st_mode))
                type = 'p';
            else if (S_ISSOCK(sb.st_mode))
                type = 's';
        }
        closedir(d);
    }
    return (type);
}

// Get permissions
char *get_permissions(char *path)
{
    DIR *d;
    struct dirent *dir;
    struct stat sb;
    char *permissions;

    d = opendir(path);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            stat(dir->d_name, &sb);
            permissions = malloc(sizeof(char) * 10);
            permissions[0] = (S_ISDIR(sb.st_mode)) ? 'd' : '-';
            permissions[1] = (sb.st_mode & S_IRUSR) ? 'r' : '-';
            permissions[2] = (sb.st_mode & S_IWUSR) ? 'w' : '-';
            permissions[3] = (sb.st_mode & S_IXUSR) ? 'x' : '-';
            permissions[4] = (sb.st_mode & S_IRGRP) ? 'r' : '-';
            permissions[5] = (sb.st_mode & S_IWGRP) ? 'w' : '-';
            permissions[6] = (sb.st_mode & S_IXGRP) ? 'x' : '-';
            permissions[7] = (sb.st_mode & S_IROTH) ? 'r' : '-';
            permissions[8] = (sb.st_mode & S_IWOTH) ? 'w' : '-';
            permissions[9] = (sb.st_mode & S_IXOTH) ? 'x' : '-';
        }
        closedir(d);
    }
    return (permissions);
}

void stat_file(char *argv[])
{
    struct stat s;
    lstat(argv[1], &s);
    if (S_ISREG(s.st_mode))
        printf("%s", s);
}

