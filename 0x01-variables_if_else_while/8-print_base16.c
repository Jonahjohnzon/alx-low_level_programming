#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Hexadecimal'
 * Return: Always 0 (Success)
 */
int main(void)
{	int number;

	char alphabet;

	for (number = 0; number < 10; number++)
	{
	putchar('0' + number);
	if (number == 9)
	{
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
	putchar(alphabet);
	}
	}
	}
	putchar('\n');
	return (0); }
