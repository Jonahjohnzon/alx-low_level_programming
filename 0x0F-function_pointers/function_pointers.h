#ifndef MAIN_M
#define MAIN_M
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
