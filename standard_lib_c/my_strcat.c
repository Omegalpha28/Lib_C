#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len = 0;
    int step = 0;

    while (dest[len])
        len++;
    while (src[step] != '\0') {
        dest[len + step] = src[step];
        step++;
    }
    dest[len + step] = '\0';
    return (dest);
}