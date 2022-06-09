/*
** EPITECH PROJECT, 2021
** my_printf_checker
** File description:
** my_printf_checker
*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

int my_printf(char *str, ...);

void my_printf_basic()
{
    my_printf("Hello World!\n");
}

void my_printf_char()
{
    my_printf("%c", 'c');
}

void my_printf_int()
{
    my_printf("%b", 8);
}

void my_printf_string()
{
    my_printf("%s", "Nilson Musk");
}

void my_printf_string_endline()
{
    my_printf("%s\n", "C'est les copaings");
}

void my_printf_several_specifiers()
{
    my_printf("I'll %s to make the %s %c success and get a mark of %d%c\n", "work hard", "my_printf", 'a', 100, '%');
}

void my_printf_assert(void (*fct)(), char *expected_output)
{
    int stdout_dup = dup(fileno(stdout));
    int pipefd[2];
    char buf[101];
    int n = 0;

    pipe(pipefd);
    dup2(pipefd[1], fileno(stdout));
    fct();
    n = read(pipefd[0], buf, 100);
    buf[n] = '\0';
    close(pipefd[1]);
    dup2(stdout_dup, fileno(stdout));
    if (!strcmp(buf, expected_output))
        printf("OK\n");
    else
        printf("KO: expected '%s' but got: '%s'\n", expected_output, buf);
}

int main(void)
{
    my_printf_assert(&my_printf_basic, "Hello World!\n");
    my_printf_assert(&my_printf_char, "c");
    my_printf_assert(&my_printf_int, "1000");
    my_printf_assert(&my_printf_string, "Nilson Musk");
    my_printf_assert(&my_printf_string_endline, "C'est les copaings\n");
    my_printf_assert(&my_printf_several_specifiers, "I'll work hard to make the my_printf a success and get a mark of 100%\n");
    return 0;
}