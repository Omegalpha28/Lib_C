#include "my.h"

int my_put_nbr(int nb)
{
    int nombre;
    int len = numlen(nb);

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    nombre = nb % 10;
    if (nb / 10)
        my_put_nbr(nb / 10);
    my_putchar(48 + nombre);
    return (len);
}