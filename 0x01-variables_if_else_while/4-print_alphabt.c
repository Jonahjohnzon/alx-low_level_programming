#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'print alphabets'
 * Return: Always 0 (Success)
 */
int main(void)
	{char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	int length = strlen(alphabets);

	int start = 0;

	do {
	if (alphabets[start] == 'q' || alphabets[start] == 'e')
	{
	start++;
	continue;
	}
	putchar(alphabets[start]);
	start++;
	} while (start < length);
	putchar('\n');
	return (0); }
