/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** print_unsigned_integer.c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my_printf.h"

void print_unsigned_integer(va_list ap)
{
    unsigned int nbr = va_arg(ap, unsigned int);

    my_put_usnigned_nbr(nbr);
}