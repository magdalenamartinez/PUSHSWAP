/*
** EPITECH PROJECT, 2022
** rotate.c
** File description:
** rotatte
*/

#include "../include/my_pushswap.h"
void ra_fun(struct num *a)
{
    int temp = 0;
    if (a->numelementos_a > 1) {
        temp = a->array[0];
        izq_a(a);
        add_a(temp, a);
    }
}

void rb_fun(struct num *a)
{
    int temp = 0;
    if (a->numelementos_b > 1) {
        temp = a->arrayb[0];
        izq_b(a);
        add_b(temp, a);
    }
}

void rr_fun(struct num *a)
{
    ra_fun(a); rb_fun(a);
}

void rra_fun(struct num *a)
{
    int temp = 0;
    if (a->numelementos_a > 1) {
        temp = a->array[a->numelementos_a - 1];
        move_a(temp, a);
    }
}

void rrb_fun(struct num *a)
{
    int temp = 0;
    if (a->numelementos_b > 1) {
        temp = a->arrayb[a->numelementos_b - 1];
        move_b(temp, a);
    }
}
