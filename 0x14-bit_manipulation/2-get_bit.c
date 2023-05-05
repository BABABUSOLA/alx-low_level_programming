#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit at the index
 * @n: number
 * @index: index starting from 0, of the bit
 * Return: Value of bit at index, or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}

