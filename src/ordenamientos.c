/*
** EPITECH PROJECT, 2022
** ordenamientos.c
** File description:
** ordenamientos
*/

#include "../include/my_pushswap.h"

int esta_ordenado(struct num *a)
{
    int i = 0;
    if (a->numelementos_a == 0) {
        my_putchar('\n'); return 0;
    }
    int noordenado = 0;
    for (int j = 1; j < a->numelementos_a; j++) {
        if (a->array[j - 1] > a->array[j]) {
            noordenado = 1; break;
        }
    }
    if (noordenado == 1) {
        numelementos(a);
    } else {
        my_putchar('\n');
    }
    return noordenado;
}

int no_ordenado(struct num *a)
{
    int noordenado = 0;
    for (int j = 1; j < a->numelementos_a; j++) {
        if (a->array[j - 1] > a->array[j]) {
            noordenado = 1; break;
        }
    }
    return noordenado;
}

int cumple_ra(struct num *a)
{
    int cumple = 0;
    if (a->array[0] > a->array[1] && a->array[1] < a->array[2]) {
        if (a->array[0] > a->array[2]) {
            cumple = 1;
        }
    }
    return cumple;
}

int cumple_rra(struct num *a)
{
    int cumple = 0;
    if (a->array[0] < a->array[1] && a->array[1] > a->array[2]) {
        if (a->array[0] > a->array[2]) {
            cumple = 1;
        }
    }
    return cumple;
}
