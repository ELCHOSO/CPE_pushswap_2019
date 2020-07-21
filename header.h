/*
** EPITECH PROJECT, 2019
** pushswap
** File description:
** header
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct element
{
    int value;
    struct element *next;
}element_t;

typedef struct both_lists
{
    element_t *l_a;
    element_t *l_b;
}both_lists_t;

int my_getnbr(char *str);
int list_len(element_t *list);
void print_list(element_t *li);
element_t *insert_front_list(element_t *list, int nbr);
void my_putchar(char c);
void my_putstr(char *str);
both_lists_t pa(both_lists_t);
both_lists_t pb(both_lists_t);
element_t *ra_rb(element_t *l_a);
element_t *arg_to_list(int ac, char **av);
int check_order(element_t *l_a);
int smallest_nbrposition(element_t *l_a);
both_lists_t put_la_in_lb(both_lists_t bl);
both_lists_t put_lb_in_la(both_lists_t bl);
