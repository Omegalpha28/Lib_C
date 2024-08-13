#include <unistd.h>

int num_len(int n)
{
    int is_neg = -1;
    int step = 0;

    if (n == 0)
        return (1);
    if (n < 0) {
        step++;
        n *= -1;
    }
    while (n > 1) {
        step++;
        n = n / 10;
    }
    return (step + 1);
}

int my_put_nbr(int nb)
{
    int nombre;
    int len = num_len(nb);

    if (nb < 0) {
        write(1, '-', 1);
        nb = -nb;
    }
    nombre = nb % 10;
    if (nb / 10)
        my_put_nbr(nb / 10);
    write(1, 48 + nombre, 1);
    return (len);
}