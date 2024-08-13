#include "my.h"

int numlen(int n)
{
    int step = 0;

    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    while (n > 0) {
        step++;
        n /= 10;
    }
    return step;
}