#include <stdio.h>
#include <unistd.h>

void my_swap(int *a, int *b)
{
    int third_p;

    third_p = *a;
    *a = *b;
    *b = third_p;
}
