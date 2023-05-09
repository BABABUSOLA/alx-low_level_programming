#include "main.h"

/**
 * create_file - Creates a file as desired.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file name.
 *
 * Return: If the function fails return - -1.
 *         Else return - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, length = 0;

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	if (!filename)
		return (-1);
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, length);

	if (wrt == -1)
		return (-1);
	if (opn == -1)
		return (-1);
	close(opn);

	return (1);
}
