/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** print fonctions
*/

#include "header.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    write(1, str, i);
}
