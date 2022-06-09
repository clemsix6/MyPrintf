/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_printable_string.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdarg.h>
#include "my_printf.h"

void print_printable_char(char c)
{
    char *str = my_itoa((int)c);
    int len = my_strlen(str);

    my_putchar('\\');
    for (int i = 0; i < 3 - len; i++) {
        my_putchar('0');
    }
    my_putstr(str);
}

void print_printable_string(va_list ap)
{
    char *str = va_arg(ap, char *);

    for (int i = 0; str[i] != 0; i++) {
        if (str[i] < 32 || str[i] == 127)
            print_printable_char(str[i]);
        else
            my_putchar(str[i]);
    }
}