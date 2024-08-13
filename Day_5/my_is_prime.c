#include <stdio.h>
#include <unistd.h>

int wh_is_prime(int nb)
{
    int step = 3;

    while (step * 2 <= nb) {
        if (nb % step == 0)
            return 0;
        step += 1;
    }
}

int my_is_prime(int nb)
{
    if ((nb % 2 == 0) && (nb != 2) || nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    if (wh_is_prime(nb) == 0)
        return 0;
    else
        return 1;
}
