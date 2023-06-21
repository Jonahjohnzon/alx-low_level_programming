#include <stdio.h>
/**
 * main - Entry point
 * Description: 'The fibonacci sequence'
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long start;

	int n = 1;

	for (start = 1; start <= 20365011074; start += n)
	{
	if (start > 1)
	{
	n = start - n;
	}
	printf("%lli", start);
	if ((start + n) < 20365011074)
	{
	printf(", ");
	}
	}
	printf("\n");
	return (0);
}
