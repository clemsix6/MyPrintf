# MyPrintf

### Introduction

Le MyPrintf est un projet qui consiste à re coder la fonction système printf présente dans la libC.



### Fonctionnement

Le printf gère tous les flags de la fonction système comme le %s qui permet d'insérrer une string ou %d qui permet d'insérer un nombre entier.

Pour tester la fonction nous avons dû faire des tests unitaires comme ci-dessous:

```c
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
```



### Utilisation

L'utilisation de la fonction se fait comme ci-dessous

```c
my_printf("I'll %s to make the %s %c success and get a mark of %d%c\n", "work hard", "my_printf", 'a', 100, '%');
```

Ce qui affiche dans le terminal le résultat suivant

> I'll work hard to make the my\_printf a success and get a mark of 100%
