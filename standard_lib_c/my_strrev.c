#include "my.h"

char *my_strrev(char *str)
{
    int len = 0;
    int alpha = 0;
    char reserve;

    while (str[len] != '\0')
        len++;
    while (alpha < len - 1) {
        reserve = str[alpha];
        str[alpha] = str[len];
        str[len] = reserve;
        alpha++;
        len--;
    }
    return (str);
}