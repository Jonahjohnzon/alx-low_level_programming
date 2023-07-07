#include <unistd.h>
/**
 * _putchar - Putchar
 * Description: 'print a char in stdo'
 * @c: char input
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
