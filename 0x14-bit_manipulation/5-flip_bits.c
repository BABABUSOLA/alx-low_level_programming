#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another
 * @n: the first number
 * @m: the second number to convert to
 * Return: the number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sub;
	int increment;

	sub = n ^ m;
	increment = 0;

	while (sub)
	{
		increment++;
		sub &= (sub - 1);
	}

	return (increment);
}
