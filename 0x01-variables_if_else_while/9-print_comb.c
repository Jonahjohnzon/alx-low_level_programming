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
	putchar(',');
	putchar(' ');
	number++;
	} while (number < 9);
	putchar('0' + number);
	return (0);
}
