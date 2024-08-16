/*
** EPITECH PROJECT, 2022
** add_element.c
** File description:
** addelement
*/

#include "../include/my_pushswap.h"
void add_a(int numnew, struct num *a)
{
    int *aux; aux = malloc(sizeof(int) * (a->numelementos_a + 1));
    int j = 0;
    while (a->numelementos_a > j) {
        aux[j] = a->array[j]; j++;
    }
    aux[j] = numnew;
    a->numelementos_a++; a->array = malloc(sizeof(int) * a->numelementos_a);
    for (int i = 0; i < a->numelementos_a; i++) {
        a->array[i] = aux[i];
    }
    free(aux);
}

void add_b(int numnew, struct num *a)
{
    int *aux; aux = malloc(sizeof(int) * (a->numelementos_b + 1));
    int j = 0;
    while (a->numelementos_b > j) {
        aux[j] = a->arrayb[j]; j++;
    }
    aux[j] = numnew;
    a->numelementos_b++; a->arrayb = malloc(sizeof(int) * a->numelementos_b);
    for (int i = 0; i < a->numelementos_b; i++) {
        a->arrayb[i] = aux[i];
    }
    free(aux);
}

void move_a(int ult, struct num *a)
{
    int *aux; aux = malloc(sizeof(int) * (a->numelementos_a));
    int j = 0; aux[j] = ult;
    while (j < a->numelementos_a) {
        aux[j + 1] = a->array[j]; j++;
    }
    a->array = malloc(sizeof(int) * a->numelementos_a);
    for (int i = 0; i < a->numelementos_a; i++) {
        a->array[i] = aux[i];
    }
    free(aux);
}

void move_b(int ult, struct num *a)
{
    int *aux; aux = malloc(sizeof(int) * (a->numelementos_b));
    int j = 0;
    aux[j] = ult;
    while (j < a->numelementos_b) {
        aux[j + 1] = a->arrayb[j]; j++;
    }
    a->arrayb = malloc(sizeof(int) * a->numelementos_b);
    for (int i = 0; i < a->numelementos_b; i++) {
        a->arrayb[i] = aux[i];
    }
    free(aux);
}
