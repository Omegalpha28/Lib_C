/*
** EPITECH PROJECT, 2023
** C-POOL07
** File description:
** print my_compute_power
*/
#include <stdio.h>
#include <unistd.h>

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
        if (result > 2147483647 || result < -2147483648)
            return 0;
        return (result);
    } else {
        result = 0;
        return (result);
    }
}
