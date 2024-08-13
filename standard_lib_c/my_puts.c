#include <stdio.h>
#include <unistd.h>

int my_putstr(char const *str)
{
    int step = 0;

    while (str[step] != '\0') {
        write(1, &str[step], 1);
        step++;
    }
}
