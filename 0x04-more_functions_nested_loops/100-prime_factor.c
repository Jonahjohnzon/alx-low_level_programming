#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime number of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long a, prime;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			prime = number / a;
		}
	}

	printf("%ld\n", prime);

	return (0);
}

