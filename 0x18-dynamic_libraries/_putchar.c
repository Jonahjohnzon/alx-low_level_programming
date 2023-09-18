#include <unistd.h>

/**
 * _putchar - print
 * @c: input
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
