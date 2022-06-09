/*
** EPITECH PROJECT, 2021
** MyPrintf
** File description:
** my_convert_base.c
*/

#include <stdlib.h>

int my_strlen(const char *);
char *my_revstr (char *str);

int get_result_size(int nbr, int base_len)
{
    int steps = 0;

    while (nbr > base_len) {
        nbr /= base_len;
        steps++;
    }
    return steps + 1;
}

char *my_convert_base(int nbr, char const *base)
{
    int base_len = my_strlen(base);
    int result_size = get_result_size(nbr, base_len);
    int integer_nbr;
    int diff;
    char *ch = malloc(result_size);
    int index = 0;

    while (nbr >= base_len) {
        integer_nbr = (int) (nbr / base_len);
        diff = nbr - integer_nbr * base_len;
        ch[index] = base[diff];
        index++;
        nbr = integer_nbr;
    }
    ch[index] = base[integer_nbr];
    index++;
    ch[index] = 0;
    my_revstr(ch);
    return ch;
}