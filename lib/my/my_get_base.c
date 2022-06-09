/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** my_get_base.c
*/

#include <stdio.h>

int my_strlen(const char *);

char *my_get_base(int nb, char *base)
{
    int base_len = my_strlen(base);
    int diff;
    int div;

    while (nb > 1) {
        div = nb / base_len;
        diff = nb - (nb - div);

        printf("div : %d, mod : %d", div, diff);
        nb = div;
    }
    return "ME";
}
