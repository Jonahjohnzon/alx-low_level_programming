#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, and then in uppercase'
 * Return: Always 0 (Success)
 */
int main(void)
{	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	int start = 0;

	bool cap = false;

	int length = strlen(alphabets);

	do {
	putchar(alphabets[start]);
	start++;
	} while (start < length && cap == false);
	cap = true;
	start = 0;
	do {
	putchar(toupper(alphabets[start]));
	start++;
	} while (start < length && cap == true);
	putchar('\n');
	return (0);
}
