/*
** EPITECH PROJECT, 2022
** CPOOL Function
** File description:
** my_putnbr.c
*/

#include <unistd.h>

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
}
