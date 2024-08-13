#include "my.h"

int my_compute_factorial_it(int nb)
{
    int step = 1;
    int result = 1;

    if ((nb > 0) && (nb <= 12)) {
        while (step < nb) {
            result = result * (step + 1);
            step++;
        }
        return (result);
    } else if ((nb == 0) || (nb == 1))
        return (result);
    else
        result = 0;
    return (result);
}
