#include "my.h"

size_t walen(char **warray)
{
    size_t i = 0;

    for (; warray[i]; i++);
    return i;
}