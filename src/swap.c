/*
** EPITECH PROJECT, 2022
** swap.c
** File description:
** swap
*/

#include "../include/my_pushswap.h"

void sa_fun(struct num *a)
{
    int temp = 0;
    if (a->numelementos_a > 1) {
        temp = a->array[0];
        a->array[0] = a->array[1];
        a->array[1] = temp;
    }
}

void sb_fun(struct num *a)
{
    int temp = 0;
    if (a->numelementos_b > 1) {
        if (a->arrayb[0] > a->arrayb[1]) {
            temp = a->arrayb[0];
            a->arrayb[0] = a->arrayb[1];
            a->arrayb[1] = temp;
        }
    }
}

void sc_fun(struct num *a)
{
    sa_fun(a); sb_fun(a);
}
