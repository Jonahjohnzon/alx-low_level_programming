#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints digits'
 * Return: Always 0 (Success)
 */
int main(void)
{	int first;

	int second;

	for (first = 0; first < 9; first++)
	{
	for (second = first; second <= 9; second++)
	{
	if (first != second)
	{
	putchar('0' + first);
	putchar('0' + second);
	if (first == 8 && second == 9)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
