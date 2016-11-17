#ifndef HOLBERTON_H_FILE
#define HOLBERTON_H_FILE
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
