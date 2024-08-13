#include "my.h"

char *skipstr(char *word, char delimiter)
{
    while (*word != delimiter && *word != '\0')
        word++;
    if (*word == delimiter)
        word++;
    if (*word == '\n')
        word++;
    return word;
}