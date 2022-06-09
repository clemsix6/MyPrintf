/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_hex_integer.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

void print_hex_integer(va_list ap)
{
    int nbr = va_arg(ap, int);
    char *base = my_convert_base(nbr, "0123456789ABCDEF");

    my_putstr(base);
    free(base);
}