/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** my_printf.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "my_printf.h"

char *my_get_base(int nb, char *base);

void (*fun_ptr_array[])(va_list) = {
    print_signed_integer,
    print_octal_integer,
    print_hex_integer,
    print_unsigned_integer,
    print_char,
    print_string,
    print_printable_string,
    print_binary_integer
};

char flags[9][3] =
{
    {'d', 'i', 0},
    {'o', 0, 0},
    {'x', 'X', 0},
    {'u', 0, 0},
    {'c', 0, 0},
    {'s', 0, 0},
    {'S', 0, 0},
    {'b', 0, 0},
    {0, 0, 0}
};

bool is_flag(char c, int i)
{
    for (int j = 0; flags[i][j] != 0; j++) {
        if (flags[i][j] == c)
            return true;
    }
    return false;
}

int print_flag(char c, va_list ap)
{
    int i = 0;

    if (c == '%')
    {
        my_putchar('%');
        return 0;
    }
    for (; flags[i][0] != 0; i++) {
        if (is_flag(c, i))
            break;
    }
    if (flags[i][0] == 0)
        return 84;
    (*fun_ptr_array[i])(ap);
    return 0;
}

int process_string(char *str, int *index, va_list ap)
{
    int ret_code = 0;
    if (str[*index] == '%' && str[*index + 1] != 0) {
        ret_code = print_flag(str[*index + 1], ap);
        if (ret_code == 84)
            return 84;
        *index += 1;
        return 0;
    }
    my_putchar(str[*index]);
    return 0;
}

int my_printf(char *str, ...)
{
    va_list ap;
    int ret_code;

    va_start(ap, 0);
    for (int i = 0; str[i] != 0; i++) {
        ret_code = process_string(str, &i, ap);
        if (ret_code == 84)
            return 84;
    }
    va_end(ap);
    return 0;
}
