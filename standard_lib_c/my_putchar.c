#include <unistd.h>

char my_putchar(char a)
{
    write(1, &a, 1);
}