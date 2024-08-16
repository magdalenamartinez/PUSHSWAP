/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/
#include "../include/my_pushswap.h"
int main(int argc, char **argv)
{
    int n = 0;
    if (argc > 2) {
        n = comprobar(argc, argv);
        if (n == 0) {
            create_array(argc, argv);
        }
        if (n == 1) {
            my_putchar('\n');
            return 84;
        }
        return 0;
    } else {
        my_putchar('\n');
        return 84;
    }
}

int comprobar(int argc, char **argv)
{
    int i = 0; i = 1; int n = 0;
    while (i < argc) {
        if (argv[i][0] != '0' && my_getnbr(argv[i]) == 0) {
            n = 1; break;
        }
        i++;
    }
    return n;
}
