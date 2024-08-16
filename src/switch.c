/*
** EPITECH PROJECT, 2022
** switch.c
** File description:
** switch
*/

#include "../include/my_pushswap.h"

void switch_function(struct num *a, int num)
{
    int i = 0;
    while (a->array[i] != num) {
        i++;
    }
    switch (i) {
        case 0:
            pb_fun(a);
            break;
        case 1:
            sa_fun(a); pb_fun(a);
            break;
        default:
            dividir_bucle(a, i);
            break;
    }
}

void switch_function_2(struct num *a, int i)
{
    switch (i) {
        case 0:
            pb_fun(a);
            break;
        case 1:
            sa_fun(a); pb_fun(a);
            break;
        default:
            dividir_bucle(a, i);
            break;
    }
}

void dividir_bucle(struct num *a, int i)
{
    if (i == a->numelementos_a - 1) {
        rra_fun(a); pb_fun(a);
    } else {
        if (i > a->numelementos_a / 2) {
            mayor_mitad(a, i);
        }
        if (i <= a->numelementos_a / 2) {
            menor_mitad(a, i);
        }
    }
}

void mayor_mitad(struct num *a, int i)
{
    int num = 0; num = a->array[i];
    while (a->array[0] != num) {
        rra_fun(a);
    }
    pb_fun(a);
}

void menor_mitad(struct num *a, int i)
{
    int num = 0; num = a->array[i];
    while (a->array[0] != num) {
        ra_fun(a);
    }
    pb_fun(a);
}
