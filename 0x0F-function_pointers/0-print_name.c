#include "main.h"

/**
 * print_name - print a name
 * @name: input
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
