/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_binary_integer.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

void print_binary_integer(va_list ap)
{
    unsigned int nbr = va_arg(ap, unsigned int);
    char *base = my_convert_base_unsigned(nbr, "01");

    my_putstr(base);
    free(base);
}