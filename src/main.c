/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** main
*/

#include "../include/my.h"



// Main function for my_ls, my_ls_a, my_ls_l
int main(int ac, char **av)
{
    ls_flag(ac, av);
    ls_a_flag(ac, av);
    //ls_l_flag(ac, av);
    return (0);
}
