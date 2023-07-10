#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the programs and arg
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: 'print additioin argv'
 * Return: 0 or 1 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	};
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));

	return (0);
}
