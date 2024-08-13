#include "my.h"

int word_counter(char *word)
{
    int num_word = 1;

    for (int i = 0; word[i] != '\0'; i++) {
        if ((word[i] == ' ' || word[i] == '\t') &&
            !(word[i - 1] == ' ' || word[i - 1] == '\t'))
            num_word++;
    }
    return num_word;
}