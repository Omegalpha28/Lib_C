#include "my.h"

static int using_task06_2(int nb, int step)
{
    while (step * 2 <= nb) {
        if (nb % step == 0)
            return 0;
        step += 1;
    }
    return step;
}

static int using_task06(int nb)
{
    int step = 3;

    if (((nb % 2 == 0) && (nb != 2)) || nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    if (using_task06_2(nb, step) == 0)
        return 0;
    return 1;
}

int my_find_prime_sup(int nb)
{
    int result;

    result = using_task06(nb);
    if (result == 1)
        return (nb);
    else {
        while (result != 1) {
            result = using_task06(nb);
            nb++;
        }
    nb = nb - 1;
    }
    return (nb);
}
