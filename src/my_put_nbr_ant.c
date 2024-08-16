/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** my_put_nbr
*/
int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr_ant(int nb)
{
    int d;
    d = 1; int r = 0;
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        r = 11;
    } else {
        if (nb < 0) {
            my_putchar('-');
            nb *= -1; r = 1;
        }
        while ((nb / d) >= 10) {
            d *= 10;
        }
        while (d > 0) {
            my_putchar((nb / d) % 10 + '0');
            d /= 10;
            r++;
        }
    }
    return r;
}
