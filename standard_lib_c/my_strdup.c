#include "my.h"

char *my_strdup(char const *src)
{
    char *result;
    int step = 0;
    int i = 0;

    for (; src[step] != '\0'; step++);
    result = malloc(step + 1);
    for (; src[i] != '\0'; i++)
        result[i] = src[i];
    result[i] = '\0';
    return result;
}
