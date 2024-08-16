/*
** EPITECH PROJECT, 2022
** bigsmall.c
** File description:
** bigsmall
*/

#include "../include/my_pushswap.h"
int find_bs_number(struct num *a)
{
    int j = 0; int i = 0;
    a->biggestnum = a->array[j];
    for (j = 1; j < a->numelementos_a; j++) {
        if (a->biggestnum < a->array[j]) {
            a->biggestnum = a->array[j];
            }
    }
    a->smallestnum = a->array[i];
    for (i = 1; i < a->numelementos_a; i++) {
        if (a->smallestnum > a->array[i]) {
            a->smallestnum = a->array[i];
        }
    }
}

void print_num(struct num *a)
{
    int i = 0;
    while (i < a->numelementos_a) {
        my_printf("%i ",a->array[i]); i++;
    }
    my_printf("\n"); i = 0;
    while (i < a->numelementos_b) {
        my_printf("%i ", a->arrayb[i]); i++;
    }
    my_printf("\n");
}
