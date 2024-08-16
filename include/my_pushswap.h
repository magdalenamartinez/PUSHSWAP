/*
** EPITECH PROJECT, 2022
** my_pushswap.h
** File description:
** my_pushswap.h
*/

#ifndef MY_PUSHSWAP_H_
    #define MY_PUSHSWAP_H_
    #include "my.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    struct num {
        int *array;
        int numelementos_a;
        int numelementos_acopia;
        int numelementos_b;
        int *arrayb;
        int biggestnum;
        int smallestnum;
        int num;
    };
    int my_put_nbr_ant(int nb);
    int create_array(int argc, char **argv);
    int esta_ordenado(struct num *a);
    void add_a(int numnew, struct num *a);
    void add_b(int numnew, struct num *a);
    void dch_a(int newnum, struct num *a);
    void dch_b(int newnum, struct num *a);
    void move_a(int ult, struct num *a);
    void move_b(int ult, struct num *a);
    void izq_b(struct num *a);
    int comprobar(int argc, char **argv);
    void izq_a(struct num *a);
    void sa_fun(struct num *a);
    void sb_fun(struct num *a);
    void sc_fun(struct num *a);
    void pa_fun(struct num *a);
    void pb_fun(struct num *a);
    void ra_fun(struct num *a);
    void rb_fun(struct num *a);
    void rr_fun(struct num *a);
    void rra_fun(struct num *a);
    void rrb_fun(struct num *a);
    void rrr_fun(struct num *a);
    void bucle_tres(struct num *a);
    void print_num(struct num *a);
    void numelementos(struct num *a);
    int no_ordenado(struct num *a);
    int caso_sa(struct num *a);
    int cumple_ra(struct num *a);
    int cumple_rra(struct num *a);
    int caso_1_sa(struct num *a);
    int caso_2_sa(struct num *a);
    int caso_3_sa(struct num *a);
    int cumple_sa(struct num *a);
    int find_bs_number(struct num *a);
    void menor_mitad(struct num *a, int i);
    void mayor_mitad(struct num *a, int i);
    void dividir_bucle(struct num *a, int i);
    void bucle_cinco(struct num *a);
    void switch_function(struct num *a, int num);
    void bucle_cuatro(struct num *a);
    void bucle_mas_cinco(struct num *a);
    void switch_function_2(struct num *a, int i);
    void more_5_elements(struct num *a);
    int cont_b(struct num *a);
    void cont_a(struct num *a);
#endif /*MY_PUSHSWAP_H_*/
