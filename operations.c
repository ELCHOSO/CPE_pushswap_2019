/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** operation pa pb
*/

#include "header.h"

both_lists_t pb(both_lists_t bl)
{
    element_t *tmp = bl.l_a;

    bl.l_a = bl.l_a->next;
    bl.l_b = insert_front_list(bl.l_b, tmp->value);
    free(tmp);
    return (bl);
}

both_lists_t pa(both_lists_t bl)
{
    element_t *tmp = bl.l_b;

    bl.l_b = bl.l_b->next;
    bl.l_a = insert_front_list(bl.l_a, tmp->value);
    free(tmp);
    return (bl);
}

element_t *ra_rb(element_t *l_a)
{
    element_t *start = l_a;
    element_t *tmp = l_a;

    if (l_a == NULL)
        return (l_a);
    while (tmp->next != NULL)
        tmp = tmp->next;
    l_a = l_a->next;
    tmp->next = start;
    start->next = NULL;
    return (l_a);
}
