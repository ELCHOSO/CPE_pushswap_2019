/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** algo
*/

#include "header.h"

int check_order(element_t *l_a)
{
    element_t *tmp = l_a;

    int value = -2147483648;
    while (tmp != NULL) {
        if (tmp->value < value)
            return (1);
        value = tmp->value;
        tmp = tmp ->next;
    }
    return (0);
}

int smallest_nbrposition(element_t *l_a)
{
    int i = 0;
    int min = 2147483647;
    element_t *tmp = l_a;

    while (tmp != NULL) {
        if (tmp->value < min)
            min = tmp->value;
        tmp = tmp->next;
    }
    tmp = l_a;
    while (tmp != NULL) {
        i++;
        if (tmp->value == min)
            return (i);
        tmp = tmp->next;
    }
}

both_lists_t put_la_in_lb(both_lists_t bl)
{
    int len = list_len(bl.l_a);
    int min_pos;

    while (len != 0) {
        min_pos = smallest_nbrposition(bl.l_a);
        for (int i = 0; i != min_pos - 1; i++) {
            bl.l_a = ra_rb(bl.l_a);
            my_putstr("ra ");
        }
        bl = pb(bl);
        my_putstr("pb ");
        len--;
    }
    return (bl);
}

both_lists_t put_lb_in_la(both_lists_t bl)
{
    int len = list_len(bl.l_b);

    while (len != 0) {
        bl = pa(bl);
        my_putstr("pa ");
        len--;
    }
    return (bl);
}

