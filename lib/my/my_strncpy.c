/*
** EPITECH PROJECT, 2021
** LIB
** File description:
** strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    dest[n] = 0;
    return (dest);
}
