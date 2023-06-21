#include <stdio.h>
/**
 * main - Entry point
 * Description: 'The fibonacci sequence'
 * Return: Always 0 (Success)
 */
int main(void)
{
	long start;

	int n = 1;

	for (start = 1; start <= 12586269025; start += n)
	{
	if (start > 1)
	{
	n = start - n;
	}
	printf("%ld", start);
	if ((start + n) < 50)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
