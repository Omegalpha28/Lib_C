#ifndef FUNCTION_CREATED_H_
    #define FUNCTION_CREATED_H_
    #include "dependencies.h"


int my_char_isprintable(char str);
char **my_str_to_word_array(char *word);
int numlen(int n);
char *skip_spaces(char *word);
char *skipstr(char *word, char delimiter);
int word_counter(char *word);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_compute_square_root(int nb);
int my_compute_power_rec(int nb, int p);
int my_compute_power_it(int nb, int p);
int my_compute_factorial_rec(int nb);
int my_compute_factorial_it(int nb);
#endif