#include "main.h"

/**
 * get_endianness - the endianness
 * Return: 0 if big endian, or 1 if small endian
 */
int get_endianness(void)
{
	int number;

	number = 1;
	return ((*(char *)&num == 1) ? 1 : 0);
}
