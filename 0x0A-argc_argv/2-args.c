#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the programs and arg
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: 'print argv'
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}

	return (0);
}
