/*
** EPITECH PROJECT, 2023
** C-POOL05
** File description:
** print my_compute_square_root
*/
#include <stdio.h>
#include <unistd.h>

int my_result(int nb)
{
    int step = 0;
    int result = 0;

    while (step < nb) {
        if (step * step == nb)
            result = step;
        step++;
    }
    return (result);
}

int my_compute_square_root(int nb)
{
    if (nb == 1)
        return 1;
    if (nb >= 0)
        return (my_result(nb));
    return (0);
}
