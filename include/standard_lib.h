#ifndef STANDARD_LIB_H_
    #define STANDARD_LIB_H_
    #include "dependencies.h"

void my_putchar(char a);
int my_put_nbr(int nb);
void my_putstr(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *str);
int my_strlen(char const *str);
char *my_strrev(char *str);
void my_swap(int *a, int *b);
#endif