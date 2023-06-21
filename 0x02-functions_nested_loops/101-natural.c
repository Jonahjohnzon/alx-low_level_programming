
#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 in 1024
  * Description: 'Print multiples of 3 or 5'
  * Return: Always (Success)
  */
int main(void)
{
	int a, b = 0;

	while (a  < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}

		a++;
	}

	printf("%d\n", b);
	return (0);
}
