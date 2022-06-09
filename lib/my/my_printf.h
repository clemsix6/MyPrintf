/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** my_printf.h
*/

#ifndef MYPRINTF_MY_PRINTF_H
#define MYPRINTF_MY_PRINTF_H

#include "../../include/my.h"

void print_percent(va_list ap);
void print_char(va_list ap);
void print_hex_integer(va_list ap);
void print_octal_integer(va_list ap);
void print_printable_string(va_list ap);
void print_signed_integer(va_list ap);
void print_unsigned_integer(va_list ap);
void print_string(va_list ap);
void print_binary_integer(va_list ap);

#endif //MYPRINTF_MY_PRINTF_H
