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
    #include <sys/sysmacros.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <dirent.h>
    #include <time.h>
    #include <pwd.h>
    #include <grp.h>
    #include <fcntl.h>
    #include <stdbool.h>

    typedef struct {
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

    typedef struct {
        int a;
        int l;
        int R;
    } ls_flag1;

    typedef struct {
        int d;
        int r;
        int t;
    } ls_flag2;

    // lib for my ls

    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strlen(char const *str);
    void my_putnbr(int nb);
    int my_strcmp(char const *s1, char const *s2);
    void not_dir(char *str, char *path);

    // my_ls
    void my_ls(char *path);
    void my_ls_a(char *path);
    void my_ls_l(char *path);
    int main(int ac, char **av);

    // perms


    //check
    char *link_path(char *path, char *name);
    int is_dir(char *path);
    int is_file(char *path);
    int is_link(char *path);
    int is_special(char *path);
    void check_file(char *path, char *file);

    // my_get
    int get_blocks(char *path);
    int get_links(char *path);
    char *get_user(char *path);
    char *get_group(char *path);
    int get_size(char *path);
    char *get_date(char *path);
    char *get_name(char *path);
    char *get_time(char *path);
    char *get_file_name(char *path);
    char get_type(char *path);
    char *get_permissions(char *path);

    // Flag conditions
    int check_flag(char *str);

#endif /* !MY_H_ */
