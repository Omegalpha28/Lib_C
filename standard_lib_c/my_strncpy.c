#include "my.h"

char *my_strncpy(char *dest, char const *str, int n)
{
    int step = 0;

    while (step < n && str[step] != '\0') {
        dest[step] = str[step];
        step++;
    }
    if (step < n)
        dest[step] = '\0';
    return (dest);
}