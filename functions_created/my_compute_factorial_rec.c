#include "my.h"

int my_compute_factorial_rec(int nb)
{
    int result = 1;

    if ((nb > 0) && (nb <= 12)) {
        result = nb * my_compute_factorial_rec(nb - 1);
        return (result);
    } else if ((nb == 0) || (nb == 1))
        return (result);
    else {
        result = 0;
        return (result);
    }
}
