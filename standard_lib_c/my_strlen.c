#include "my.h"

int my_strlen(char const *str)
{
    int step = 0;

    while (str[step] != '\0')
        step++;
    return(step);
}
