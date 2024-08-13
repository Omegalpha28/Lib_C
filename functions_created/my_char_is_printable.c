#include "my.h"

int my_char_isprintable(char str)
{
    if (str >= '!' && str <= '~')
        return 0;
    return 1;
}