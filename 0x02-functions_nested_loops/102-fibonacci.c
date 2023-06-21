#include <stdio.h>
/**
 * main - Entry point
 * Description: 'The fibonacci sequence'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start;

	int n = 1;

	for (start = 1; start < 50; start += n)
	{
	if (start > 1)
	{
	n = start - n;
	}
	printf("%d", start);
	if ((start + n) < 50)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
