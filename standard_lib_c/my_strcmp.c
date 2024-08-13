#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int step = 0;

    for (; s1[step] != '\0' || s2[step] != '\0'; step++) {
        if (s2[step] != s1[step])
            return (s2[step] - s1[step]);
    }
    return (s1[step] - s2[step]);
}