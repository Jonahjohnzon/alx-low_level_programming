#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * fig4 - function
 * @usn: chrac
 * @length: length
 * Return: int
 */
int fig4(char *usn, int length)
{
	int chars;
	int vchars;
	unsigned int rand_number;

	chars = *usn;
	vchars = 0;
	while (vchars < length)
	{
		if (chars < usn[vchars])
			chars = usn[vchars];
		vchars += 1;
	}
	srand(chars ^ 14);
	rand_number = rand();
	return (rand_number & 63);
}

/**
 * fig5 - function
 * @usn: charac
 * @length: length
 * Return: int
 */
int fig5(char *usn, int length)
{
	int chars;
	int vchars;

	chars = vchars = 0;
	while (vchars < length)
	{
		chars = chars + usn[vchars] * usn[vchars];
		vchars += 1;
	}
	return (((unsigned int)chars ^ 239) & 63);
}

/**
 * fig6 - function
 * @usn: charac
 * Return: int
 */
int fig6(char *usn)
{
	int chars;
	int vchars;

	chars = vchars = 0;
	while (vchars < *usn)
	{
		chars = rand();
		vchars += 1;
	}
	return (((unsigned int)chars ^ 229) & 63);
}

/**
 * main - Entry
 * @argc: input
 * @argv: input
 * Return: input
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, chars;
	int vchars;
	long alpha[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;
	keygen[0] = ((char *)alpha)[(length ^ 59) & 63];
	chars = vchars = 0;
	while (vchars < length)
	{
		chars = chars + argv[1][vchars];
		vchars = vchars + 1;
	}
	keygen[1] = ((char *)alpha)[(chars ^ 79) & 63];
	chars = 1;
	vchars = 0;
	while (vchars < length)
	{
		chars = argv[1][vchars] * chars;
		vchars = vchars + 1;
	}
	keygen[2] = ((char *)alpha)[(chars ^ 85) & 63];
	keygen[3] = ((char *)alpha)[fig4(argv[1], length)];
	keygen[4] = ((char *)alpha)[fig5(argv[1], length)];
	keygen[5] = ((char *)alpha)[fig6(argv[1])];
	keygen[6] = '\0';
	for (chars = 0; keygen[chars]; chars++)
		printf("%c", keygen[chars]);
	return (0);
}
