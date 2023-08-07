#include "main.h"

/**
 * create_file - create file.
 * @filename: pointer
 * @text_content: pointer
 * Return: Int
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
