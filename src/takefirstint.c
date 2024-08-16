/*
** EPITECH PROJECT, 2022
** takefirst.c
** File description:
** takefirst
*/

#include "../include/my_pushswap.h"

void pa_fun(struct num *a)
{
    if (a->numelementos_b > 0) {
        dch_a(a->arrayb[0], a);
        izq_b(a);
    }
}

void pb_fun(struct num *a)
{
    if (a->numelementos_a > 0) {
        dch_b(a->array[0], a);
        izq_a(a);
    }
}

void rrr_fun(struct num *a)
{
    rra_fun(a); rrb_fun(a);
}
