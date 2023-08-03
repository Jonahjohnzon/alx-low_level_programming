#include <unistd.h>

/**
 * _putchar - write
 * @c: The char
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
