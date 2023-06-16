#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{	int number = 0;

	do {
	putchar('0' + number);
	number++;
	} while (number < 10);
	putchar('\n');
	return (0);
}
