#include "my.h"

char *skip_spaces(char *word)
{
    while (*word == ' ' || *word == '\t')
        word++;
    return word;
}