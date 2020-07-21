/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** fonctions pour les listes chainées
*/

#include "header.h"

element_t *insert_front_list(element_t *list, int nbr)
{
    element_t *new = malloc(sizeof(*new));
    new->value = nbr;
    new->next = list;
    list = new;
    return (list);
}

int list_len(element_t *list)
{
    int i = 0;
    element_t *tmp = list;

    while (tmp !=  NULL) {
        i++;
        tmp = tmp->next;
    }
    return (i);
}

element_t *arg_to_list(int ac, char **av)
{
    element_t *list = NULL;
    int i = ac - 1;

    while (i != 0) {
        list = insert_front_list(list, my_getnbr(av[i]));
        i--;
    }
    return (list);
}
