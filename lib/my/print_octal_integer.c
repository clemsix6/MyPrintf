/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_octal_integer.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

void print_octal_integer(va_list ap)
{
    int nbr = va_arg(ap, int);
    char *base = my_convert_base(nbr, "01234567");

    my_putstr(base);
    free(base);
}