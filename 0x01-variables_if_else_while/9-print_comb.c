#include <stdio.h>
/**
 * main - Entry point
 * Description: 'digitd with commas'
 * Return: Always 0 (Success)
 */
int main(void)
{	int number = 0;
	do {
	putchar('0' + number);
	if (number != 9)
	{
	putchar(',');
	putchar(' ');
	}
	number++;
	} while (number < 10);
	putchar('\n');
	return (0);
}
