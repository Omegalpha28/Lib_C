#include "my.h"


char *skip_spaces(char *word)
{
    if (*word == ' ' || *word == '\t') {
        while (*word == ' ' || *word == '\t')
            word++;
    }
    return word;
}