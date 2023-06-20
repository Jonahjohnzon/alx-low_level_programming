#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'Putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char stringss[] = "_putchar";

	int length = strlen(stringss);

	int count;

	for (count = 0; count < length; count++)
	{
	_putchar(stringss[count]);
	}
	_putchar('\n');
	return (0);
}
