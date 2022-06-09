/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_string.c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my_printf.h"

void print_string(va_list ap)
{
    char *str = va_arg(ap, char *);

    my_putstr(str);
}