#include <stdio.h>
/**
 * main - Entry point
 * Description: 'The fibonacci sequence'
 * Return: Always 0 (Success)
 */
int main(void)
{	int start;

	int n = 1;

	int sum = 0;

	for (start = 1; start <= 4000000; start += n)
	{
	if (start > 1)
	{
	n = start - n;
	}
	if ((start % 2) == 0)
	{
	sum = sum + start;
	}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
