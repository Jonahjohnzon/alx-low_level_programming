#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{	int number = 0;

	do {
	printf("%d", number);
	number++;
	} while (number < 10);
	printf("\n");
	return (0);
}
