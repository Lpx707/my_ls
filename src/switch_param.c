/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** switch_param.c
*/

#include "../include/my.h"

ls_flag1 get_param(char arg, ls_flag1 param)
{
    switch (arg) {
        case 'a':
            param.a = 1;
            break;
        case 'l':
            param.l = 1;
            break;
        case 'R':
            param.R = 1;
            break;
        default:
            my_putstr("Invalid option");
            break;
    }
    return (param);
}

ls_flag2 get_param2(char arg, ls_flag2 param)
{
    switch (arg) {
        case 'd':
            param.d = 1;
            break;
        case 'r':
            param.r = 1;
            break;
        case 't':
            param.t = 1;
            break;
        default:
            my_putstr("Invalid option");
            break;
    }
    return (param);
}
