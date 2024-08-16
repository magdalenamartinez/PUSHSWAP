/*
** EPITECH PROJECT, 2022
** move.c
** File description:
** move
*/

#include "../include/my_pushswap.h"
void dch_a(int newnum, struct num *a)
{
    int *aux; aux = malloc(sizeof(int) * (a->numelementos_a + 1));
    aux[0] = newnum; int j = 0;
    while (a->numelementos_a > j) {
        aux[j + 1] = a->array[j]; j++;
    }
    a->numelementos_a = a->numelementos_a + 1;
    a->array = malloc(sizeof(int) * a->numelementos_a);
    for (int i = 0; i < a->numelementos_a; i++) {
        a->array[i] = aux[i];
    }
    free(aux);
}

void dch_b(int newnum, struct num *a)
{
    int *aux; aux = malloc(sizeof(int) * (a->numelementos_b + 1));
    aux[0] = newnum; int j = 0;
    while (a->numelementos_b > j) {
        aux[j + 1] = a->arrayb[j];
        j++;
    }
    a->numelementos_b++; a->arrayb = malloc(sizeof(int) * a->numelementos_b);
    for (int i = 0; i < a->numelementos_b; i++) {
        a->arrayb[i] = aux[i];
    }
    free(aux);
}

void izq_a(struct num *a)
{
    int *aux; aux = malloc(sizeof(int) * (a->numelementos_a - 1));
    int j = 0;
    while (j < a->numelementos_a - 1) {
        aux[j] = a->array[j + 1]; j++;
    }
    a->numelementos_a--;
    a->array = malloc(sizeof(int) * a->numelementos_a);
    for (int i = 0; i < a->numelementos_a; i++) {
        a->array[i] = aux[i];
    }
    free(aux);
}

void izq_b(struct num *a)
{
    int *auxb; auxb = malloc(sizeof(int) * (a->numelementos_b - 1));
    int j = 0;
    while (j < a->numelementos_b - 1) {
        auxb[j] = a->arrayb[j + 1]; j++;
    }
    a->numelementos_b--;
    a->arrayb = malloc(sizeof(int) * a->numelementos_b);
    for (int i = 0; i < a->numelementos_b; i++) {
        a->arrayb[i] = auxb[i];
    }
    free(auxb);
}
