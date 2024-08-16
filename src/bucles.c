/*
** EPITECH PROJECT, 2022
** bucles.c
** File description:
** bucles
*/

#include "../include/my_pushswap.h"

void numelementos(struct num *a)
{
    int num = 0;
    while (1) {
        if (a->array[0] > a->array[a->numelementos_a - 1]) {
            ra_fun(a); my_printf("ra ");
        }
        if (a->array[0] > a->array[1]) {
            sa_fun(a); my_printf("sa ");
        }
        if (no_ordenado(a) == 1 && a->array[0] < a->array[1]) {
            pb_fun(a); my_printf("pb "); cont_a(a);
        }
        while (no_ordenado(a) == 0 && num == 0) {
            pa_fun(a); my_printf("pa "); num = cont_b(a);
        }
        num = 0;
        if (no_ordenado(a) == 0 && a -> numelementos_b == 0) {
            break;
        }
    }
    my_printf("rb\n");
}

int cont_b(struct num *a)
{
    int num = 0;
    if (a->numelementos_b == 0) {
        num = 1;
    }
    return num;
}

void cont_a(struct num *a)
{
    if (a->arrayb[0] < a->array[a->numelementos_b - 1]) {
        rb_fun(a); my_printf("rb ");
    }
    if (a->arrayb[0] < a->array[1]) {
        sb_fun(a); my_printf("sb ");
    }
}
