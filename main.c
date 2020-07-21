/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** main
*/

#include "header.h"

int main(int ac, char **av)
{
    both_lists_t bl = {arg_to_list(ac, av), NULL};

    if (list_len(bl.l_a) == 1 || check_order(bl.l_a) == 0) {
        my_putchar('\n');
        return (0);
    }
    bl = put_la_in_lb(bl);
    bl = put_lb_in_la(bl);
    my_putstr("pb pa\n");
}
