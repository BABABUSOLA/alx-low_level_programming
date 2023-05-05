#include "main.h"
#include <stdlib.h>

/*
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	size_t length = 0;
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		char c = b[length - i - 1];

		if (c == '0')
		{
			continue;
		} else if (c == '1')
		{
			result |= (1 << i);
		} else
		{
			free(0);
			exit(1);
		}
	}
	free(b);
	return  (result);
}
