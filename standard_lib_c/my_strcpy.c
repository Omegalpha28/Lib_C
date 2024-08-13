#include "my.h"

char *my_strcpy(char *dest, char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        dest[len] = str[len];
        len++;
    }
    dest[len] = '\0';
    return (dest);
}