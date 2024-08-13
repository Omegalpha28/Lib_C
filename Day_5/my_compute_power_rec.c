/*
** EPITECH PROJECT, 2023
** C-POOL05
** File description:
** print my_compute_power_rec
*/
#include <stdio.h>
#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return 1;
    if ((nb == 0) || (p < 0) || result > 2147483647 || result < -2147483648)
        return 0;
    else {
        result = nb * my_compute_power_rec(nb, p - 1);
        return (result);
    }
}
