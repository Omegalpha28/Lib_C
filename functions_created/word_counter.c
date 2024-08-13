#include "my.h"


int word_counter(char *word)
{
    int line = 1;

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == ' ')
            line++;
    }
    return line;
}