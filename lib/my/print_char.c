/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_char.c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my_printf.h"

void print_char(va_list ap)
{
    char c = (char)va_arg(ap, int);

    my_putchar(c);
}