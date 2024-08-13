#include "../include/my.h"

void my_putchar(char a)
{
    write(1, &a, 1);
}
