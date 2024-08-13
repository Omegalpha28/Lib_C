#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int result = 1;
    int step;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    if (nb > 0 || nb < 0) {
        for (step = 0; step < p; step++)
            result = nb * result;
        if (result > 2147483647 || result < -2147483647)
            return 0;
        return (result);
    } else {
        result = 0;
        return (result);
    }
}
