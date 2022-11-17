/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <dirent.h>
    #include <time.h>
    #include <pwd.h>
    #include <grp.h>
    #include <fcntl.h>

    typedef struct
    {
        char *rights;
        int nlinks;
        char *file_master;
        char *folder_master;
        int size;
        char *time;
        time_t elapsed_time;
        char *name_file;
        char *name_low;
    } ls_info;

    typedef struct
    {
        int a;
        int l;
        int R;
    } ls_flag1;

    typedef struct
    {
        int d;
        int r;
        int t;
    } ls_flag2;
    // lib for my ls

    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strlen(char const *str);
    void my_putnbr(int nb);
    void not_dir(char *str, char *path);

    // my_ls
    void my_ls(char *path);
    void my_ls_a(char *path);
    int main(int ac, char **av);

    // perms

    void types_perms(struct stat stat_file, ls_info *info);
    void rights_file(struct stat stat_file, ls_info *info);

    //check
    char *link_path(char *path, char *name);
    int is_dir(char *path);
    int is_file(char *path);
    int is_link(char *path);
    int is_special(char *path);
#endif /* !MY_H_ */
