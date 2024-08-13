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
char *my_strdup(char const *src);
char *my_strndup(int begin, int end, char const *input);
char *my_strncpy(char *dest, char const *str, int n);
int my_strncmp(char const *s1, char const *s2, int len);
#endif