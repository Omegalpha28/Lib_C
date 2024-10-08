#include "my.h"

static int space_limited(char *word, int j)
{
    if (word[j] == ' ' || word[j] == '\t')
        for (; (!(word[j + 1] != ' ' && word[j + 1] != '\t')); j++);
    return j;
}

static int compare(int j, char *word)
{
    if (my_char_isprintable(word[j]) == 0 && word[j] != ' ' && word[j] != '\t')
        return 0;
    return 1;
}

char **my_str_to_word_array(char *word)
{
    char **array;
    int line = 0;
    int character = 0;

    skip_spaces(word);
    array = malloc(sizeof(char *) * (word_counter(word) + 1));
    for (int j = 0; j < my_strlen(word); j++) {
        character = 0;
        array[line] = malloc(sizeof(char) * my_strlen(word) + 1);
        for (; compare(j, word) == 0; j++) {
            array[line][character] = word[j];
            character++;
        }
        j = space_limited(word, j);
        if (array[line][character - 1] != '\0')
            array[line][character] = '\0';
        line++;
    }
    array[line] = NULL;
    return array;
}