/*
** EPITECH PROJECT, 2022
** create_array.c
** File description:
** createarray
*/

#include "../include/my_pushswap.h"
int create_array(int argc, char **argv)
{
    struct num *a; a = malloc(sizeof(struct num));
    int i = 0; i = 1; int j = 0;
    a->array = (int*) malloc(sizeof(int) * (argc - 1));
    while (i < argc) {
        a->array[j] = my_getnbr(argv[i]); j++; i++;
    }
    a->numelementos_a = argc - 1;
    a->numelementos_b = 0;
    esta_ordenado(a);
}
