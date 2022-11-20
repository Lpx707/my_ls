/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <dirent.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>
    #include <errno.h>
    #include <string.h>

    typedef struct s_list {
        char *name;
        char *path;
        struct s_list *next;
    } t_list;

    typedef struct s_flags {
        int a;
        int l;
        int d;
        int r;
        int t;
        int R;
    } t_flags;

    typedef struct s_info {
        char *name;
        char *path;
        char *rights;
        char *user;
        char *group;
        char *size;
        char *date;
        char *link;
        int blocks;
        struct s_info *next;
    } t_info;

    typedef struct s_max {
        int max_link;
        int max_user;
        int max_group;
        int max_size;
        int max_name;
    } t_max;

    //lib
    int my_strlen(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    void my_putchar(char c);
    void my_putstr(char const *str);
    void my_put_nbr(int nb);

    //my_ls
    int check_file(char *av);
    int check_dir(char *av);
    void multiple_d(int ac, char **av);
    void multiple_f(int ac, char **av);
    void multiple_fd(int ac, char **av);
    int main(int ac, char **av);
    int check_flag(char *av);
    void print_file(char *av);

    //Error
    void error_no_such_file(char *av);

    // Flag
    void my_ls_a(char *av);
    void my_ls(char *av);
    void stat_file(char *av);


    int ls_flag(int ac, char **av);
    int ls_a_flag(int ac, char **av);

    //main


#endif /* !MY_H_ */
