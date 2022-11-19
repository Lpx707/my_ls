/*
** EPITECH PROJECT, 2022
** CPOOL Function
** File description:
** my_strlen.c
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
