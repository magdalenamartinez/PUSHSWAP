/*
** EPITECH PROJECT, 2022
** casos.c
** File description:
** casos
*/

#include "../include/my_pushswap.h"
int cumple_sa(struct num *a)
{
    int cumple = 0;
    if (a->array[1] > a->array[2] && a->array[0] < a->array[2]) {
        cumple = 1;
    }
    return cumple;
}

int caso_sa(struct num *a)
{
    int i = 0;
    if (caso_1_sa(a) == 1) {
        i = 1;
    }
    if (caso_2_sa(a) == 1) {
        i = 1;
    }
    if (caso_3_sa(a) == 1) {
        i = 1;
    }
    return i;
}

int caso_1_sa(struct num *a)
{
    int cumple = 0;
    if (a->array[1] < a->array[2] && a->array[0] < a->array[2]) {
        cumple = 1;
    }
    return cumple;
}

int caso_2_sa(struct num *a)
{
    int cumple = 0;
    if (a->array[1] > a->array[2] && a->array[0] > a->array[2]) {
        cumple = 1;
    }
    return cumple;
}

int caso_3_sa(struct num *a)
{
    int cumple = 0;
    if (a->array[1] > a->array[2] && a->array[0] < a->array[2]) {
        cumple = 1;
    }
    return cumple;
}
