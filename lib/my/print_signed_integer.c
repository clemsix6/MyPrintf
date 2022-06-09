/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_signed_integer.c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my_printf.h"

void print_signed_integer(va_list ap)
{
    int nbr = va_arg(ap, int);

    my_put_nbr(nbr);
}