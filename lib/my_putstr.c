/*
** EPITECH PROJECT, 2022
** CPOOL Function
** File description:
** my_putstr
*/

#include <unistd.h>

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
